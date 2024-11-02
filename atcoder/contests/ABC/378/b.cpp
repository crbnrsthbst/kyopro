#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int N;
  cin >> N;
  int qs[N], rs[N];
  rep(i, N) { cin >> qs[i] >> rs[i]; }
  int Q;
  cin >> Q;
  int ts[Q], ds[Q];
  rep(i, Q) {
    int t, d;
    cin >> t >> d;
    int q = qs[t - 1];
    int r = rs[t - 1];

    int dr = d % q;
    int ans;
    if (dr == r) {
      ans = d;
    } else if (dr > r) {
      ans = q * (d / q + 1) + r;
    } else {
      ans = d + (r - dr);
    }
    cout << ans << endl;
  }

  return 0;
}