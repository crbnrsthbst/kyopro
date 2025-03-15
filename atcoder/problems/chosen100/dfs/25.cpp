// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()
using Graph = vector<vector<int>>;
const int dy[8] = {-1, 1, 0, 0, 1, 1, -1, -1};
const int dx[8] = {0, 0, -1, 1, 1, -1, 1, -1};
int w, h, islandCnt;
void dfs(int y, int x, Graph &g, vector<vector<bool>> &visited) {
  visited[y][x] = true;
  rep(i, 8) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny > h - 1 || ny < 0 || nx > w - 1 || nx < 0) {
      continue;
    }
    if (visited[ny][nx] || !g[ny][nx]) {
      continue;
    }
    dfs(ny, nx, g, visited);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  while (true) {
    cin >> w >> h;
    if (w == 0) {
      break;
    }
    Graph g(h, vector<int>(w));
    rep(i, h) {
      rep(j, w) { cin >> g[i][j]; }
    }
    islandCnt = 0;
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    rep(i, h) {
      rep(j, w) {
        if (g[i][j] && !visited[i][j]) {
          islandCnt++;
          dfs(i, j, g, visited);
        }
      }
    }
    cout << islandCnt << endl;
  }

  return 0;
}