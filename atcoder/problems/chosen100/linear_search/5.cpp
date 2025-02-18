// https://atcoder.jp/contests/abc095/tasks/arc096_a
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int ans = 0;
  ans += min(a + b, c * 2) * min(x, y);
  int priceFromMinXY;
  if (x > y) {
    priceFromMinXY = min(a, c * 2);
  } else {
    priceFromMinXY = min(b, c * 2);
  }
  ans += priceFromMinXY * abs(x - y);
  cout << ans << endl;
  return 0;
}