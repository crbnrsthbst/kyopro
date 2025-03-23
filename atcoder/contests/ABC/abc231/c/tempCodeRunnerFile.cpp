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

  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> qs(q);
  rep(i, q) cin >> qs[i];
  sort(all(a));
  for (int x : qs) {
    cout << a.end() - lower_bound(all(a), x) << endl;
  }
  return 0;
}