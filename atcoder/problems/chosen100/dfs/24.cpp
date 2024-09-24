// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_B&lang=ja
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

using Graph = vector<vector<int>>;
vector<int> visited;
vector<int> done;
int t = 0;

void dfs(Graph &g, int v) {
  t++;
  visited[v] = t;
  for (auto child : g[v]) {
    if (visited[child] == 0) dfs(g, child);
  }
  t++;
  done[v] = t;
}

int main() {
  int n;
  cin >> n;
  Graph g(n + 1, vector<int>());

  rep(i, n) {
    int u, k;
    cin >> u >> k;
    rep(j, k) {
      int v2;
      cin >> v2;
      g[u].push_back(v2);
    }
  }
  visited.assign(n + 1, 0);
  done.assign(n + 1, 0);
  dfs(g, 1);
  rep1(i, n) { cout << i << " " << visited[i] << " " << done[i] << endl; }
  return 0;
}