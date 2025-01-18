#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

const int vy[2] = {-1, 1};
const int vx[2] = {0, 0};
const int hy[2] = {0, 0};
const int hx[2] = {-1, 1};
int h, w;

void dfs(vector<vector<char>>& field, bool verticalMove, int y, int x,
         vector<vector<int>>& dist) {
  rep(i, 2) {
    int nextY, nextX;
    if (verticalMove) {
      nextY = y + vy[i];
      nextX = x + vx[i];
    } else {
      nextY = y + hy[i];
      nextX = x + hx[i];
    }
    if (nextY >= h || nextY < 0 || nextX >= w || nextX < 0 ||
        field[nextY][nextX] == '#')
      continue;
    if (dist[nextY][nextX] != -1) continue;
    dist[nextY][nextX] = dist[y][x] + 1;
    dfs(field, !verticalMove, nextY, nextX, dist);
  }
}

int main() {
  cin >> h >> w;
  vector<vector<char>> field(h);
  int ys, xs, yg, xg;
  rep(i, h) {
    rep(j, w) {
      char c;
      cin >> c;
      field[i].push_back(c);
      if (c == 'S') {
        ys = i;
        xs = j;
      }
      if (c == 'G') {
        yg = i;
        xg = j;
      }
    }
  }
  vector<vector<int>> dist(h, vector<int>(w));
  rep(i, h) {
    rep(j, w) { dist[i][j] = -1; }
  }
  dist[ys][xs] = 0;
  dfs(field, true, ys, xs, dist);
  int va = dist[yg][xg];
  rep(i, h) {
    rep(j, w) { dist[i][j] = -1; }
  }
  dist[ys][xs] = 0;
  dfs(field, false, ys, xs, dist);
  int ha = dist[yg][xg];

  int ans = -1;
  if (va != -1 && ha != -1) {
    ans = min(va, ha);
  } else {
    ans = max(va, ha);
  }
  cout << ans << endl;
  return 0;
}