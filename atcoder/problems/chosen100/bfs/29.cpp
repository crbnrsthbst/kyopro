// https://atcoder.jp/contests/abc007/tasks/abc007_3
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
  int r, c, sy, sx, gy, gx;
  cin >> r >> c >> sy >> sx >> gy >> gx;
  char g[r + 1][c + 1];
  rep1(i, r) {
    rep1(j, c) {
      char c;
      cin >> c;
      g[i][j] = c;
    }
  }

  int distance[r + 1][c + 1];
  rep1(i, r) {
    rep1(j, c) { distance[i][j] = -1; }
  }
  distance[sy][sx] = 0;
  queue<pair<int, int>> q;
  q.push({sy, sx});

  while (!q.empty()) {
    pair<int, int> c = q.front();
    q.pop();
    int y = c.first;
    int x = c.second;
    rep(i, 4) {
      int nextX, nextY;
      nextX = x + dx[i];
      nextY = y + dy[i];
      if (g[nextY][nextX] == '#') continue;
      if (distance[nextY][nextX] != -1) continue;
      q.push({nextY, nextX});
      distance[nextY][nextX] = distance[y][x] + 1;
    }
  }
  cout << distance[gy][gx] << endl;
  return 0;
}