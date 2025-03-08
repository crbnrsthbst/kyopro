#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

long long minXOR = pow(10, 19) + 1;
long long sumW = 0;
int n, m;
vector<bool> seen;

void dfs(vector<vector<pair<int, int>>> &g, vector<int> &path) {
  seen[path.size() - 1] = true;
  if (path[path.size() - 1] == n - 1) {
    minXOR = (minXOR, ^sumW);
  }
  for (auto next : g[path[path.size() - 1]]) {
    if (seen[next.first]) {
      continue;
    }
    sumW += next.second;
    path.push_back(next.first);
    dfs(g, path);
    path.pop_back();
  }
  seen[path.size() - 1] = false;
  // return min(minXOR, dfs(g, path));
}

int main() {
  cin >> n >> m;
  vector<vector<pair<int, int>>> g(n, vector<pair<int, int>>());
  rep(i, m) {
    int u, v, w;
    cin >> u >> v >> w;
    u--;
    v--;
    g[u].push_back({v, w});
    g[v].push_back({u, w});
  }
  vector<int> path;
  path.push_back(0);

  seen.assign(n, false);
  cout << minXOR << endl;

  return 0;
}