#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;
ll x, a, d, n;
ll clc(ll xma) {
  ll quo = xma / d;
  ll res;
  if (quo > n - 1) {
    res = d * (quo - (n - 1));
  } else if (quo < 0) {
    res = d * (0 - quo);
  } else {
    res = 0;
  }
  return res;
}

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);
  cin >> x >> a >> d >> n;

  if (d == 0) {
    cout << abs(x - a) << endl;
    return 0;
  }

  ll ans = 0;
  ll rem = (x - a) % d;
  if (rem) {
    ll cand1 = clc((x - a) - rem) + rem;
    ll cand2 = clc((x - a) + (d - rem)) + rem;
    if (cand1 <= cand2) {
      ans = cand1;
    } else {
      ans = cand2;
    }
  } else {
    ans = clc(x - a);
  }
  cout << ans << endl;
  return 0;
}