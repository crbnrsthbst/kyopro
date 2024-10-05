#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

int main() {
  int n, s, t;
  cin >> n >> s >> t;
  vector<pair<pair<int, int>, pair<int, int>>> lines(n);

  rep(i, n) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    lines[i] = {{a, b}, {c, d}};
  }
  pair<int, int> now = {0, 0};
  vector<int> lineOrd(n);
  rep(i, n) { lineOrd[i] = i; }
  double ans = -1;
  do {
    double totalTime = 0;
    rep(points, (1 << n)) {
      vector<pair<int, int>> route(n);
      pair<int, int> lastTo = {0, 0};
      rep(ord, n) {
        pair<double, double> from;
        pair<double, double> to;
        if (points & (1 << ord)) {
          // ord番目に描画する辺については、lines[i].first の点から　スタート
          from = lines[lineOrd[ord]].first;
          to = lines[lineOrd[ord]].second;
        } else {
          from = lines[lineOrd[ord]].second;
          to = lines[lineOrd[ord]].first;
        }
        // 前の線分からの移動
        double dist = 0;
        if (lastTo.first == from.first) {
          dist = abs(from.second - lastTo.second);
        } else if (lastTo.second == from.second) {
          dist = abs(from.first - lastTo.first);
        } else {
          dist = sqrtl(pow(abs(from.first - lastTo.first), 2) +
                       pow(abs(from.second - lastTo.second), 2));
        }
        totalTime += dist / s;
        // 線分上の移動
        dist = 0;
        if (from.first == to.first) {
          dist = abs(to.second - from.second);
        } else if (from.second == to.second) {
          dist = abs(to.first - from.first);
        } else {
          dist = sqrtl(pow(abs(to.first - from.first), 2) +
                       pow(abs(to.second - from.second), 2));
        }
        totalTime += dist / t;
        lastTo = to;
      }
      if (ans == -1) {
        ans = totalTime;
      } else {
        ans = min(ans, totalTime);
      }
    }

  } while (next_permutation(all(lineOrd)));

  cout << ans << setprecision(6);
  return 0;
}