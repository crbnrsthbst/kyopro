#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll x;
  cin >> x;

  ll sumA = 0;
  rep(i, n) { sumA += a[i]; }

  ll q = x / sumA;
  ll s = x % sumA;
  ll ans = n * q;
  rep(i, n) { 
    s -= a[i];
    ans++;
    if(s < 0) {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}