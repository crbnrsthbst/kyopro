#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> cardRowsOrg(n), cardColsOrg(n);
  vector<int> cardRows(n), cardCols(n);
  rep(i, n) {
    cin >> cardRows[i];
    cin >> cardCols[i];
    cardRows[i]--;
    cardCols[i]--;
    cardRowsOrg[i] = cardRows[i];
    cardColsOrg[i] = cardCols[i];
  }
  sort(all(cardRows));
  sort(all(cardCols));

  map<int, int> moveRow, moveCol;
  moveRow[-1] = 0;
  moveCol[-1] = 0;
  int lastCardRow = -1, lastCardCol = -1;
  rep(i, n) {
    if (moveRow.count(cardRows[i]) == 0) {
      moveRow[cardRows[i]] =
          moveRow[cardRows[i - 1]] + cardRows[i] - (lastCardRow)-1;
      lastCardRow = cardRows[i];
    }
    if (moveCol.count(cardCols[i]) == 0) {
      moveCol[cardCols[i]] =
          moveCol[cardCols[i - 1]] + cardCols[i] - (lastCardCol)-1;
      lastCardCol = cardCols[i];
    }
  }
  rep(i, n) {
    cout << cardRowsOrg[i] - moveRow[cardRowsOrg[i]] + 1 << " "
         << cardColsOrg[i] - moveCol[cardColsOrg[i]] + 1 << endl;
  }

  return 0;
}