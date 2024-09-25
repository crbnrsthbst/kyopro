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
int w, h;
void dfs(Graph &g, vector<vector<bool>> &visited, int y, int x) {
  rep(dir, 8) {
    int nextY = y + dy[dir];
    int nextX = x + dx[dir];
    if (nextY < 0 || nextY > h - 1 | nextX < 0 || nextX > w - 1) continue;
    if (visited[nextY][nextX]) continue;
    if (g[nextY][nextX] == 0) continue;
    visited[nextY][nextX] = true;
    dfs(g, visited, nextY, nextX);
  }
}

int main() {
  while (true) {
    cin >> w >> h;
    if (w == 0 && h == 0) break;
    Graph g(h, vector<int>(w));
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    rep(i, h) {
      rep(j, w) { cin >> g[i][j]; }
    }
    int cnt = 0;
    rep(y, h) {
      rep(x, w) {
        if (visited[y][x] || g[y][x] == 0) continue;
        visited[y][x] = true;
        cnt++;
        dfs(g, visited, y, x);
      }
    }
    cout << cnt << endl;
  }
  return 0;
}