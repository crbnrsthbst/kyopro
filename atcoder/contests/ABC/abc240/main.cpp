#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;
ll n, x, cnt = 0, total = 1;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n, x;
  cin >> n >> x;
  vector<int> a(n), b(n);
  rep(i, n) { cin >> a[i] >> b[i]; }
  vector dp(n + 1, set<int>());

  dp[0].insert(0);
  rep1(i, n) {
    for (int d : dp[i - 1]) {
      dp[i].insert(d + a[i - 1]);
      dp[i].insert(d + b[i - 1]);
    }
  }
  cout << (dp[n].count(x) ? "Yes" : "No") << endl;
  return 0;
}