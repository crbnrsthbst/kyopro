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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) { cin >> a[i]; }
  rep(i, n) { cin >> b[i]; }

  vector<vector<bool>> dp(n, vector<bool>(2, false));
  dp[0][0] = true;
  dp[0][1] = true;
  for (int i = 1; i < n; i++) {
    dp[i][0] = (dp[i - 1][0] && abs(a[i - 1] - a[i]) <= k) ||
               (dp[i - 1][1] && abs(b[i - 1] - a[i]) <= k);
    dp[i][1] = (dp[i - 1][0] && abs(a[i - 1] - b[i]) <= k) ||
               (dp[i - 1][1] && abs(b[i - 1] - b[i]) <= k);
  }

  cout << (dp[n - 1][0] || dp[n - 1][1] ? "Yes" : "No") << endl;
  return 0;
}