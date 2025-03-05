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
void dfs(Graph &g, vector<vector<bool>> &done, int y, int x) {
  done[y][x] = true;
  rep(i, 8) {
    int ny, nx;
    ny = y + dy[i];
    nx = x + dx[i];
    if (ny < 0 || ny >= h || nx < 0 || nx >= w || g[ny][nx] == 0 || done[ny][nx]) {
      continue;
    }
    dfs(g, done, ny, nx);
  } 
}

int main() {
  vector<int> cnts;
  while (true) {
    cin >> w >> h;
    if (w == 0) {
      break;
    }
    Graph g(h, vector<int>(w));
    rep(i, h) {
      rep(j, w) { cin >> g[i][j]; }
    }
    vector<vector<bool>> done(h, vector<bool>(w, false));
    int cnt = 0;
    rep(i, h) {
      rep(j, w) {
        if (done[i][j] || g[i][j] == 0) {
          continue;
        }
        dfs(g, done, i, j);
        cnt++;
      }
    }
    cnts.push_back(cnt);
  }
  for (auto cnt : cnts) {
    cout << cnt << endl;
  }
  return 0;
}