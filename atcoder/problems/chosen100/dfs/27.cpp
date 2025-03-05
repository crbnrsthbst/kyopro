#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()
using Graph = vector<vector<int>>;
const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};
int w, h, currentCnt;
long long maxCnt;
long long dfs(Graph &g, int y, int x, vector<vector<bool>> &seen) {
  seen[y][x] = true;
  long long cnt = 1;
  rep(i, 4) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= h || nx < 0 || nx >= w || seen[ny][nx] ||
        g[ny][nx] == 0) {
      continue;
    }
    cnt = max(cnt, 1 + dfs(g, ny, nx, seen));
  }
  seen[y][x] = false;
  return cnt;
}

int main() {
  cin >> w >> h;

  Graph g(h, vector<int>(w));
  rep(i, h) {
    rep(j, w) { cin >> g[i][j]; }
  }
  vector<vector<bool>> done(h, vector<bool>(w, false));
  long long maxCnt = 0;
  rep(i, h) {
    rep(j, w) {
      if (g[i][j] == 0) continue;
      maxCnt = max(maxCnt, dfs(g, i, j, done));
    }
  }

  cout << maxCnt << endl;
  return 0;
}