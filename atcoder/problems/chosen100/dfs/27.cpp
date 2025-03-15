#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()
using Graph = vector<vector<int>>;
int h, w;
int maxBroken = -1;
const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};
int dfs(vector<pair<int, int>> &path, Graph &g, vector<vector<bool>> &visited) {
  int cnt = path.size();
  int y = path.back().first;
  int x = path.back().second;
  visited[y][x] = true;
  rep(i, 4) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny > h - 1 || ny < 0 || nx > w - 1 || nx < 0 || visited[ny][nx] || !g[ny][nx]) {
      continue;
    }
    path.push_back({ny, nx});
    cnt = max(cnt, dfs(path, g, visited));
    path.pop_back();
  }
  visited[y][x] = false;
  return cnt;
}

int main() {
  cin >> w >> h;
  Graph g(h, vector<int>(w));
  rep(i, h) {
    rep(j, w) { cin >> g[i][j]; }
  }
  vector<vector<bool>> visited(h, vector<bool>(w, false));
  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if (g[i][j]) {
        vector<pair<int, int>> path;
        path.push_back({i, j});
        ans = max(ans,  dfs(path, g, visited));
      }
    }
  }
  cout << ans << endl;
  return 0;
}