#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (ll i = (m); (i) < (ll)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;
ll n, a, b, p, q, r, s;
bool isBlack(ll i, ll j) {
  ll k = i - a;
  if (k != j - b && k != b - j) {
    return false;
  }
  if (!(k >= max(1 - a, 1 - b) && k <= min(n - a, n - b)) &&
      !(k >= max(1 - a, b - n) && k <= min(n - a, b - 1))) {
    return false;
  }
  return true;
}
int main() {
  cin >> n >> a >> b >> p >> q >> r >> s;
  p--;
  q--;
  r--;
  s--;
  rep2(i, p, q + 1) {
    rep2(j, r, s + 1) {
      if (isBlack(i + 1, j + 1)) {
        cout << '#';
      } else {
        cout << '.';
      }
    }
    cout << endl;
  }
  return 0;
}