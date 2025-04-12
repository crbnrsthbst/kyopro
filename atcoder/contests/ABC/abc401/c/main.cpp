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

  ll n, k;
  cin >> n >> k;

  if (n < k) {
    cout << 1 << endl;
    return 0;
  }

  vector<ll> A(n + 1);
  rep(i, k) { A[i] = 1; }
  A[k] = k;
  ll lastHead = 1;
  for (ll i = k + 1; i <= n; i++) {
    A[i] = ((A[i - 1] - lastHead) % 1000000000 + A[i - 1] % 1000000000) %
           1000000000;
    lastHead = A[i - k] % 1000000000;
  }
  cout << A[n] << endl;

  return 0;
}