#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> rows(h);
  rep(i, h) { cin >> rows[i]; }

  int topBlackRow = h;
  int bottomBlackRow = -1;
  int rightBlackCol = -1;
  int leftBlackCol = w;
  rep(i, h) {
    rep(j, w) {
      if (rows[i][j] == '#') {
        topBlackRow = min(i, topBlackRow);
        bottomBlackRow = max(i, bottomBlackRow);
        leftBlackCol = min(j, leftBlackCol);
        rightBlackCol = max(j, rightBlackCol);
      }
    }
  }
  if (topBlackRow == h) {
    cout << "No" << endl;
    return 0;
  }
  for (int i = topBlackRow; i <= bottomBlackRow; i++) {
    for (int j = leftBlackCol; j <= rightBlackCol; j++) {
      if (rows[i][j] == '.') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}