#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) {
    int used = min(a[i] / x, k);
    if (used != 0) {
      a[i] -= used * x;
      k -= used;
    }
    if (k == 0) {
      break;
    }
  }
  sort(a.rbegin(), a.rend());
  if (k) {
    rep(i, n) {
      if (a[i]) {
        a[i] = 0;
        k--;
        if (!k) {
          break;
        }
      }
    }
  }

  ll ans = 0;
  for (int p : a) {
    ans += p;
  }
  cout << ans << endl;

  return 0;
}