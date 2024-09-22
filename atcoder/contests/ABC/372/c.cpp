#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;

  int cnt = 0;
  rep(i, n - 2) {
    if (s.substr(i, 3) == "ABC") {
      cnt++;
    }
  }

  rep(i, q) {
    int x;
    char c;
    cin >> x >> c;
    char xc = s[x - 1];
    if (xc != c) {
      int cntBefore = 0;
      int cntAfter = 0;
      rep2(j, x - 3, x) {
        if (j < 0 || j + 2 > n - 1) {
          continue;
        }
        if (s.substr(j, 3) == "ABC") {
          cntBefore++;
        }
      }
      s[x - 1] = c;
      rep2(j, x - 3, x) {
        if (j < 0 || j + 2 > n - 1) {
          continue;
        }
        if (s.substr(j, 3) == "ABC") {
          cntAfter++;
        }
      }
      cnt += (cntAfter - cntBefore);
    }
    cout << cnt << endl;
  }

  return 0;
}