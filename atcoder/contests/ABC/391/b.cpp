#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> srows(n);
  vector<string> trows(m);

  rep(i, n) { cin >> srows[i]; }
  rep(i, m) { cin >> trows[i]; }
  int a, b;
  rep(i, n) {
    rep(j, n) {
      int topLeftRow = i + 1;
      int topLeftCol = j + 1;

      pair<int, int> sCursor = {i, j};
      bool isOk = true;
      rep(k, m) {
        string rightStringToCursor = srows[sCursor.first].substr(j);
        if (j + m > n || trows[k] != rightStringToCursor.substr(0, m)) {
          isOk = false;
          break;
        };
        if (!isOk) break;
        if (k == m - 1) break;
        if (sCursor.first == n - 1) {
          isOk = false;
          break;
        }
        sCursor.first++;
      }
      if (isOk) {
        a = topLeftRow;
        b = topLeftCol;
      }
    }
  }
  cout << a << " " << b << endl;
  return 0;
}