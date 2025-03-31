#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
vector<int> isPassed(101010, false);
bool dfs(const int current, const int before) {
  isPassed[current] = true;
  for (int i = 0; i < graph[current].size(); i++) {
    if (graph[current][i] == before) {
      // 前のノードに戻る場合
      continue;
    }
    if (isPassed[graph[current][i]]) {
      // 次に行くノードがかこに通ったことがある場合
      return true;
    }
    if (dfs(graph[current][i], current)) {
      return true;
    }
  }
  return false;
}
int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  Graph g(n, vector<int>());
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  bool hasLoop = dfs(0, -1);
  if (hasLoop) {
    cout << "閉路があります" << endl;
  } else {
    cout << "閉路はありません" << endl;
  }
  return 0;
}