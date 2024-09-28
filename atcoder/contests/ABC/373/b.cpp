#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string s;
  cin >> s;

  int ans = 0;
  vector<int> position = vector<int>(s.length());
  rep(i, s.length()) {
    char c = s[i];
    position[c - 'A'] = i;
  }
  rep(i, s.length() - 1) { ans += abs(position[i + 1] - position[i]); }
  cout << ans << endl;
  return 0;
}