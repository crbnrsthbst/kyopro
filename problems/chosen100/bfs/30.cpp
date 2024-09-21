// https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_e
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};

int main() {
  int h, w, numCheese;
  cin >> h >> w >> numCheese;
  char field[h][w];
  int ys, xs;
  rep(i, h) {
    rep(j, w) {
      char c;
      cin >> c;
      field[i][j] = c;
      if (c == 'S') {
        ys = i;
        xs = j;
      }
    }
  }
  int dist[h][w];
  rep(i, h) {
    rep(j, w) { dist[i][j] = -1; }
  }
  dist[ys][xs] = 0;
  queue<pair<int, int>> q;
  q.push({ys, xs});
  int nextCheese = 1;
  int totalDist = 0;
  while (!q.empty()) {
    auto cell = q.front();
    int y = cell.first;
    int x = cell.second;
    q.pop();
    if (int(field[y][x] - '0') == nextCheese) {
      totalDist += dist[y][x];
      if (field[y][x] == numCheese) break;
      nextCheese++;
      rep(i, h) {
        rep(j, w) { dist[i][j] = -1; }
      }
      dist[y][x] = 0;
      q = queue<pair<int, int>>();
    }
    for (int dir = 0; dir < 4; dir++) {
      int nextY = y + dy[dir];
      int nextX = x + dx[dir];
      if (field[nextY][nextX] == 'X' || nextY >= h || nextY < 0 || nextX >= w ||
          nextX < 0)
        continue;
      if (dist[nextY][nextX] != -1) continue;
      q.push({nextY, nextX});
      dist[nextY][nextX] = dist[y][x] + 1;
    }
  }
  cout << totalDist << endl;
  return 0;
}