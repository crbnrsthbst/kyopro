#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  string s;
  cin >> s;

  int cnt = 0;
  int insCnt = 0;
  rep(i, s.length()) {
    if ((i + insCnt + 1) % 2 != 0) {
      if (s[i] == 'o') {
        insCnt++;
      }
    } else {
      if (s[i] == 'i') {
        insCnt++;
      }
    }
  }
  if ((s.length() + insCnt) % 2 !=0) {
    insCnt++;
  }

  cout << insCnt << endl;

  return 0;
}