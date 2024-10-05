#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string s, t;
  cin >> s >> t;
  int minLen = min(s.length(), t.length());

  int ans = 0;
  rep(i, minLen) {
    if (s[i] != t[i]) {
      ans = i + 1;
      break;
    }
  }

  if (ans == 0) {
    if (s.length() != t.length()) {
      ans = minLen + 1;
    }
  }
  cout << ans << endl;
}