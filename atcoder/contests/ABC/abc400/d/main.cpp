#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
queue<pair<int, int>> todo, todoNext;
vector<string> g;
int h, w, a, b, c, d;
const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};

const int dy2[8] = {-1, -2, 1, 2, 0, 0, 0, 0};
const int dx2[8] = {0, 0, 0, 0, -1, -2, 1, 2};

void dfs(int y, int x, vector<vector<int>>& reqKicks, int kicks) {
  todo.push({y, x});
  reqKicks[y][x] = kicks;
  rep(i, 4) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny >= h || ny < 0 || nx >= w || nx < 0 || g[ny][nx] == '#' ||
        reqKicks[ny][nx] != -1) {
      continue;
    }
    dfs(ny, nx, reqKicks, kicks);
  }
}

void breakWalls(int y, int x, vector<vector<int>>& reqKicks, int kicks) {
  rep(i, 8) {
    int ny = y + dy2[i], nx = x + dx2[i];
    if (ny >= h || ny < 0 || nx >= w || nx < 0 || reqKicks[ny][nx] != -1) {
      continue;
    }
    if (g[ny][nx] == '#') {
      reqKicks[ny][nx] = kicks;
      todoNext.push({ny, nx});
      dfs(ny, nx, reqKicks, kicks);
    }
  }
}

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  cin >> h >> w;
  g.resize(h);
  rep(i, h) { cin >> g[i]; }
  vector<vector<int>> reqKicks(h, vector<int>(w, -1));
  cin >> a >> b >> c >> d;
  a--;
  b--;
  c--;
  d--;
  dfs(a, b, reqKicks, 0);

  int kick = 1;
  while (true) {
    while (!todo.empty()) {
      pair<int, int> cell = todo.front();
      todo.pop();
      breakWalls(cell.first, cell.second, reqKicks, kick);
    }
    kick++;
    queue<pair<int, int>> empty;
    swap(todo, todoNext);
    if (reqKicks[c][d] != -1) {
      break;
    }
  }

  cout << reqKicks[c][d] << endl;
  return 0;
}