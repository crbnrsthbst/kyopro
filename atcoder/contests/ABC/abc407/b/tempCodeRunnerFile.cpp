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

  double x, y;
  cin >> x >> y;

  double cnt = 0;
  rep1(i, 6) {
    rep1(j, 6) {
      if (i + j >= x || abs(i - j) >= y) {
        cnt++;
      }
    }
  }
  double total = 36;
  cout << fixed << setprecision(20) << cnt / total << endl;

  return 0;
}