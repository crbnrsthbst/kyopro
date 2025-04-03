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
  vector<string> S(n);
  rep(i, n) cin >> S[i];

  int ans = 0;
  rep(i, 1 << n) {
    unordered_map<char, int> cnts;
    rep(j, n) {
      if (i & (1 << j)) {
        for (char c : S[j]) {
          cnts[c]++;
        }
      }
    }
    int appearKCnt = 0;
    for (auto cnt : cnts) {
      if (cnt.second == k) {
        appearKCnt++;
      }
    }
    ans = max(ans, appearKCnt);
  }
  cout << ans << endl;
  return 0;
}