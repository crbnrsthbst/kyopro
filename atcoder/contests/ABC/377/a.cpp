#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string s;
  cin >> s;

  bool a = false;
  bool b = false;
  bool c = false;
  rep(i, 3) {
    if (s[i] == 'A') a = true;
    if (s[i] == 'B') b = true;
    if (s[i] == 'C') c = true;
  }
  string ans;
  if (a && b && c) {
    ans = "Yes";
  } else {
    ans = "No";
  }
  cout << ans << endl;
  return 0;
}