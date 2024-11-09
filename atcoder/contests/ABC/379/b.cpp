#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  int consecutiveGood = 0;
  int ans = 0;
  rep(i, n) {
    if (s[i] == 'O') {
      consecutiveGood++;
    } else {
      consecutiveGood = 0;
    }
    if (consecutiveGood == k) {
      ans++;
      consecutiveGood = 0;
    }
  }
  cout << ans << endl;
  return 0;
}