#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

int main() {
  string s;
  cin >> s;
  rep(i, s.length()) {
    if (s[i] == '2') {
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}