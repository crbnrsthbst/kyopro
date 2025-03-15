#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()
using Graph = vector<vector<int>>;
vector<int> cnt;
vector<bool> visited;
vector<int> rootInc;
void dfs(int r, int cntParent, Graph &g) {
  visited[r] = true;
  cnt[r] = cntParent + rootInc[r];
  for (int c : g[r]) {
    if (visited[c]) {
      continue;
    }
    dfs(c, cnt[r], g);
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  Graph g(n, vector<int>());
  rep(i, n - 1) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<int> p(q), x(q);
  rootInc.assign(n, 0);
  rep(i, q) {
    cin >> p[i] >> x[i];
    p[i]--;
    rootInc[p[i]] += x[i];
  }
  cnt.assign(n, 0);
  visited.assign(n, false);

  dfs(0, 0, g);

  for (int v : cnt) {
    cout << v << " ";
  }
  cout << endl;

  return 0;
}