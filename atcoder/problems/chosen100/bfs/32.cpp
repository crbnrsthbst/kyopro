// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1166&lang=jp
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};

int main() {
  while (true) {
    int w, h;
    cin >> w >> h;
    if (w == 0 && h == 0) {
      break;
    }
    int verticalWalls[h][w];
    int horizontalWalls[h][w];
    rep(i, h) {
      rep(j, w) {
        if (j == w - 1) {
          verticalWalls[i][j] = 1;
        } else {
          cin >> verticalWalls[i][j];
        }
      }
      if (i == h - 1) {
        rep(j, w) { horizontalWalls[i][j] = 1; }
      } else {
        rep(j, w) { cin >> horizontalWalls[i][j]; }
      }
    }

    int dist[h][w];
    rep(i, h) {
      rep(j, w) { dist[i][j] = 0; }
    }
    dist[0][0] = 1;
    queue<pair<int, int>> q;
    q.push({0, 0});
    while (!q.empty()) {
      auto cell = q.front();
      int y = cell.first;
      int x = cell.second;
      q.pop();
      rep(i, 4) {
        int nextY = y + dy[i];
        int nextX = x + dx[i];
        if (nextY < 0 || nextY > h - 1 || nextX < 0 || nextX > w - 1) continue;
        if (dist[nextY][nextX] != 0) continue;
        if (y == nextY && verticalWalls[y][min(x, nextX)]) continue;
        if (x == nextX && horizontalWalls[min(y, nextY)][x]) continue;

        dist[nextY][nextX] = dist[y][x] + 1;
        if (nextX == w - 1 && nextY == h - 1) {
          break;
        }
        q.push({nextY, nextX});
      }
    }
    cout << dist[h - 1][w - 1] << endl;
  }

  return 0;
}