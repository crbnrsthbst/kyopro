#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int h, w, n;
  cin >> h >> w >> n;
  vector<int> rowToTrash(h, 0), colToTrash(w, 0);
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    rowToTrash[x]++;
    colToTrash[y]++;
  }
  unordered_set<int> cleanedRows, cleanedCols;
  
  int q;
  cin >> q;
  rep(i, q) {
    int t, xORy;
    cin >> t >> xORy;
    if (t == 1) {
      cout << colToTrash[xORy] << endl;
      colToTrash[xORy] = 0;

    } else {
      cout << rowToTrash[xORy] << endl;
      rowToTrash[xORy] = 0;
    }
  }

  return 0;
}