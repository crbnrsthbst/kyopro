#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;
using P = pair<int, int>;

const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};
const char ar[4] = {'^', 'v', '<', '>'};

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;
  vector<string> g(h), ans(h);
  rep(i, h) {
    cin >> g[i];
    ans[i] = g[i];
  }
  vector<vector<int>> dist(h, vector<int>(w, 0));
  set<P> todo;
  rep(i, h) rep(j, w) {
    if (g[i][j] == 'E') {
      dist[i][j] = -1;
      rep(k, 4) {
        int ny = i + dy[i], nx = j + dx[i];
        if (ny > h || ny < 0 || nx > w || nx < 0) {
          continue;
        }
        if (g[ny][nx] == '.') {
          dist[ny][nx] = 1;
          int dir;
          if (k == 0) {
            dir = 1;
          } else if (k == 1) {
            dir = 0;
          } else if (k == 2) {
            dir = 3;
          } else {
            dir = 2;
          }
          ans[ny][nx] = ar[dir];
          if (todo.count({ny, nx})) {
            todo.erase({ny, nx});
          }
          rep(l, 4) {
            ny += dy[i], nx += dx[i];
            if (ny > h || ny < 0 || nx > w || nx < 0) {
              continue;
            }
            todo.insert({i, j});
          }
        }
      }
    }
    if (g[i][j] == '#') {
      dist[i][j] = 1;
    }
  }

  int targetDist = 2;
  while (!todo.empty()) {
    for (P cell : todo) {
      int y = cell.first, x = cell.second;
      dist[y][x] = targetDist;
      rep(i, 4) {
        int ny = y + dy[i], nx = x + dx[i];
        if (ny > h || ny < 0 || nx > w || nx < 0) {
          continue;
        }
        if (dist[ny][nx] == targetDist - 1) {
          ans[y][x] = ar[i];
          if (todo.count({y, x})) {
            todo.erase({y, x});
          }
          continue;
        }
        if (dist[ny][nx] == 0) {
          todo.insert({ny, nx});
        }
      }
    }
    targetDist++;
  }
  rep(i, h) {
    rep(j, w) { cout << ans[i][j]; }
    cout << endl;
  }

  return 0;
}