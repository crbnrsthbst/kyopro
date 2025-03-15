// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_B&lang=ja
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

using Graph = vector<vector<int>>;
vector<int> done;
vector<int> visited;
int ts = 0;
void dfs(int u, Graph &g) {
  visited[u] = ++ts;
  for (auto v : g[u]) {
    if (!visited[v]) {
      dfs(v, g);
    }
  }
  done[u] = ++ts;
}

int main() {
  int n;
  cin >> n;
  Graph g(n, vector<int>());
  rep(i, n) {
    int u, k;
    cin >> u >> k;
    u--;
    rep(j, k) {
      int v;
      cin >> v;
      v--;
      g[i].push_back(v);
    }
  }
  done.assign(n, 0);
  visited.assign(n, 0);

  rep(i, n) {
    if (visited[i]) {
      continue;
    }
    dfs(i, g);
  }
  rep(i, n) { cout << i + 1 << " " << visited[i] << " " << done[i] << endl; }
  return 0;
}