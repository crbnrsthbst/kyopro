#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> b(n, vector<int>(m));
  rep(i, n) {
    rep(j, m) { cin >> b[i][j]; }
  }

  int firstCol = -1;
  int firstRow = -1;
  rep1(col, 7) {
    if ((b[0][0] - col) % 7 != 0) {
      continue;
    }
    firstCol = col;
    firstRow = (b[0][0] - col) / 7 + 1;
  }
  if (firstCol == -1 || firstRow == -1) {
    cout << "No" << endl;
    return 0;
  }
  int colCursor = firstCol, rowCursor = firstRow;
  rep(i, n) {
    rep(j, m) {
      if (colCursor > 7 || (b[i][j] - colCursor) % 7 != 0 ||
          (b[i][j] - colCursor) / 7 + 1 != rowCursor) {
        cout << "No" << endl;
        return 0;
      }
      colCursor++;
    }
    colCursor = firstCol;
    rowCursor++;
  }

  cout << "Yes" << endl;
  return 0;
}