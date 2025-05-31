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

  int n;
  cin >> n;
  vector<int> A(n);
  rep(i, n) cin >> A[i];
  vector<ll> acum(n);
  rep(i, n) {
    if (i == 0) {
      acum[i] == A[i];
    }
    acum[i] = acum[i - 1] + A[i];
  }

  ll sum = 0;
  rep(i, n - 1) { sum += A[i] * (acum[n - 1] - acum[i]); }
  cout << sum << endl;
  return 0;
}