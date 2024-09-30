#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
using ll = long long;
vector<ll> ans;
struct Edge {
  int to, w;
};

void dfs(vector<vector<Edge>> &g, int v, ll val, vector<bool> &visited) {
  visited[v] = true;
  ans[v] = val;
  for (Edge e : g[v]) {
    if (visited[e.to]) continue;
    dfs(g, e.to, val + e.w, visited);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  ans = vector<ll>(n);
  vector<vector<Edge>> g(n);
  rep(i, m) {
    int u, v, w;
    cin >> u >> v >> w;
    u--;
    v--;
    g[u].emplace_back(Edge{v, w});
    g[v].emplace_back(Edge{u, -w});
  }
  vector<bool> visited(n, false);
  vector<bool> used(n);
  rep(sv, n) {
    if (visited[sv]) continue;
    dfs(g, sv, 0, visited);
  }

  rep(i, n) cout << ans[i] << ' ';
  cout << endl;
  return 0;
}