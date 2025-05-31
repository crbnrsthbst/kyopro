#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n, m, q;
  cin >> n >> m >> q;
  vector<unordered_set<int>> userToPage(n);
  vector<bool> allAuth(n, false);
  rep(i, q) {
    int t, x;

    cin >> t >> x;
    x--;

    if (t == 1) {
      int y;
      cin >> y;
      y--;
      userToPage[x].insert(y);
    } else if (t == 2) {
      allAuth[x] = true;
    } else {
      int y;
      cin >> y;
      y--;
      if (allAuth[x] || userToPage[x].count(y)) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}