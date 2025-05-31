#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
bool dfs(const Graph &G, int v, vector<bool> &seen) {
  seen[v] = true;
  if (G[v].size() != 2) {
    return false;
  }
  if (seen[G[v][0]] && seen[G[v][1]] && min(G[v][0], G[v][1]) == 0) {
    return true;
  }
  bool isCycle = false;
  for (int nv : G[v]) {
    if (seen[nv]) {
      continue;
    }
    isCycle = dfs(G, nv, seen);
  }
  return isCycle;
}

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  Graph g(n);

  rep(i, m) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<bool> seen(n, false);
  bool hasCycle = dfs(g, 0, seen);
  bool isCycle = true;
  rep(i, n) {
    if (!seen[i]) isCycle = false;
  }
  if (isCycle) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}