#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n;
  cin >> n;
  unordered_map<int, int> yToLeftestRX;
  unordered_map<int, int> yToRightestLX;
  vector<int> x(n), y(n);
  rep(i, n) { cin >> x[i] >> y[i]; }
  string s;
  cin >> s;

  rep(i, n) {
    if (s[i] == 'R') {
      if (yToLeftestRX.count(y[i])) {
        yToLeftestRX[y[i]] = min(yToLeftestRX[y[i]], x[i]);
      } else {
        yToLeftestRX[y[i]] = x[i];
      }
    } else {
      if (yToRightestLX.count(y[i])) {
        yToRightestLX[y[i]] = max(yToRightestLX[y[i]], x[i]);
      } else {
        yToRightestLX[y[i]] = x[i];
      }
    }
  }

  for (auto yx : yToLeftestRX) {
    if (yToRightestLX.count(yx.first)) {
      if (yx.second < yToRightestLX[yx.first]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}