#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, d;
  cin >> n >> d;
  vector<pair<int, int>> tl(n);
  rep(i, n) {
    int t,l;
    cin >> t >>l;
    tl[i] = {t, l};
  }
  rep1(k, d) {
    int maxWeight = 0;
    rep(i, n) {
      int weight = tl[i].first * (tl[i].second + k);
      maxWeight = max(maxWeight, weight);
    }
    cout << maxWeight << endl;
  }
  return 0;
}