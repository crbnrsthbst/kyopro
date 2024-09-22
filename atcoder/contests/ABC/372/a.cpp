#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  string s;
  cin >> s;
  vector<char> ans;
  rep(i, s.length()) {
    if (s[i] != '.') {
      ans.push_back(s[i]);
    }
  }
  for (char c : ans) {
    cout << c;
  }
  cout << endl;

  return 0;
}