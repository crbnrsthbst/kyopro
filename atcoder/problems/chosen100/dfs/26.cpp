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
vector<int> counter;
void dfs(Graph &g, vector<bool> &done, int v, int parentCounter) {
  done[v] = true;
  counter[v] += parentCounter;
  for (int nv : g[v]) {
    if (done[nv]) continue;
    dfs(g, done, nv, counter[v]);
  }
}

int main() {
  int n, q;
  cin >> n >> q;

  Graph g(n, vector<int>());
  rep(i, n - 1) {
    int v, u;
    cin >> v >> u;
    g[v - 1].push_back(u - 1);
    g[u - 1].push_back(v - 1);
  }
  counter.assign(n, 0);
  rep(i, q) {
    int v, cnt;
    cin >> v >> cnt;
    counter[v - 1] += cnt;
  }
  vector<bool> done(n, false);
  done[0] = true;
  dfs(g, done, 0, 0);
  for (auto cnt : counter) {
    cout << cnt << " ";
  }
  return 0;
}