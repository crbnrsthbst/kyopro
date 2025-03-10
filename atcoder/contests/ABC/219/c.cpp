#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()

int main() {
  vector<char> x(26);
  map<char, char> convert;
  rep(i, 26) {
    cin >> x[i];
    convert[x[i]] = 'a' + i;
  }
  int n;
  cin >> n;
  vector<string> S(n);
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, s.length()) { s[j] = convert[s[j]]; }
    S[i] = s;
  }

  sort(all(S));

  for (string s : S) {
    for (char c : s) {
      cout << x[int(c - 'a')];
    }
    cout << endl;
  }
  return 0;
}