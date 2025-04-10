#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int h1, h2, h3, w1, w2, w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

  int ans = 0;
  rep1(r1c1, 28) {
    rep1(r1c2, 28) {
      int r1c3 = h1 - (r1c1 + r1c2);
      rep1(r2c1, 28) {
        rep1(r2c2, 28) {
          int r2c3 = h2 - (r2c1 + r2c2);
          int r3c1 = w1 - (r1c1 + r2c1);
          int r3c2 = w2 - (r1c2 + r2c2);
          int r3c31 = w3 - (r1c3 + r2c3);
          int r3c32 = h3 - (r3c1 + r3c2);
          if (r1c3 > 0 && r2c3 > 0 && r3c1 > 0 && r3c2 > 0 && r3c31 > 0 &&
              r3c32 > 0 && r3c31 == r3c32) {
            ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}