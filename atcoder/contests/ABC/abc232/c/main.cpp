#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector<set<int>> t(n, set<int>()), a(n, set<int>());
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    t[a].insert(b);
    t[b].insert(a);
  }
  rep(i, m) {
    int c, d;
    cin >> c >> d;
    c--;
    d--;
    a[c].insert(d);
    a[d].insert(c);
  }

  vector<int> p;
  rep(i, n) { p.push_back(i); }
  bool pExists;
  do {
    pExists = true;
    rep(u, n) {
      for (int v : t[u]) {
        if (!a[p[u]].count(p[v])) {
          pExists = false;
          break;
        }
      }
      if (!pExists) {
        break;
      }
    }
    if (pExists) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(all(p)));
  cout << "No" << endl;
  return 0;
}