#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string s;
  cin >> s;
  pair<int, int> wStartEnd = {-1, -1};
  rep(i, s.length()) {
    char c = s[i];
    if (c == 'W') {
      if (wStartEnd.first == -1) {
        wStartEnd.first = i;
      } else {
      }
    } else if (c == 'A') {
      if (wStartEnd.first != -1) {
        wStartEnd.second = i - 1;
        s[wStartEnd.first] = 'A';
        for (int j = wStartEnd.first + 1; j <= i; j++) {
          s[j] = 'C';
        }
        wStartEnd.first = -1;
        wStartEnd.second = -1;
      }
    } else {
      wStartEnd.first = -1;
    }
  }
  cout << s << endl;
  return 0;
}