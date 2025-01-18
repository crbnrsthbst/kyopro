#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> x(m);
  rep(i, m) { cin >> x[i]; }
  sort(x.begin(), x.end());
  vector<int> a(m);
  rep(i, m) { cin >> a[i]; }

  if (x[0] != 1) {
    cout << -1 << endl;
    return 0;
  }

  long long ans = 0;
  int occupiedRight = 1;

  rep(i, m) {
    if (occupiedRight > x[i]) {
      ans += a[i] * (occupiedRight - x[i] + 1);
    }
    ans += a[i] * (a[i] - 1) / 2;
    occupiedRight += a[i] - 1;
    if (occupiedRight > n || (i < m - 1 && occupiedRight < (x[i + 1] - 1)) ||
        (i == m && occupiedRight != n)) {
      ans = -1;
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
