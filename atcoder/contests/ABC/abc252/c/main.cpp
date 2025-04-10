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

  int n;
  cin >> n;
  vector<string> S(n);
  rep(i, n) cin >> S[i];

  int ans = 1000;
  rep(num, 10) {
    int time = 0;
    rep(col, 10) {
      int sameColCnt = 0;
      for (string s : S) {
        if (int(s[col] - '0') == num) {
          time = max(time, 10 * sameColCnt + col);
          sameColCnt++;
        }
      }
    }
    ans = min(ans, time);
  }

  cout << ans << endl;
  return 0;
}