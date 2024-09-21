// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C&lang=ja
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  int n;
  cin >> n;

  vector<vector<int>> g(n + 1, vector<int>());
  rep(i, n) {
    int v, k;
    cin >> v >> k;
    rep(j, k) {
      int v2;
      cin >> v2;
      g[v].push_back(v2);
    }
  }

  queue<int> q;
  q.push(1);
  vector<int> distance(n + 1, -1);
  distance[1] = 0;
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int child : g[v]) {
      if (distance[child] != -1) continue;
      q.push(child);
      distance[child] = distance[v] + 1;
    }
  }

  rep1(i, n) { cout << i << " " << distance[i] << endl; }

  return 0;
}