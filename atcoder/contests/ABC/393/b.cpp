#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.length()) {
    char c1 = s[i];
    if (c1 != 'A') continue;
    for (int j = i + 1; j < s.length(); j++) {
      char c2 = s[j];
      if (c2 != 'B') continue;
      int interval = j - i;
      if (j + interval < s.length() && s[j + interval] == 'C') {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}