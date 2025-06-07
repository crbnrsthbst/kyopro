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
  int n, l;
  cin >> n >> l;
  vector<int> d(n - 1);
  rep(i, n - 1) { cin >> d[i]; }
  map<unsigned long long, unsigned long long> distToPoints;
  distToPoints[0]++;
  int rawDist = 0;
  for (int i = 0; i < n - 1; i++) {
    rawDist += d[i];
    distToPoints[rawDist % l]++;
  }
  if (l % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  unsigned long long edgeLen = l / 3;
  unsigned long long ans = 0;
  for (auto dToP : distToPoints) {
    if (dToP.first >= edgeLen) {
      continue;
    }
    unsigned long long secondD = dToP.first + edgeLen,
                       thirdD = secondD + edgeLen;
    if (distToPoints.count(secondD) && distToPoints.count(thirdD)) {
      ans += dToP.second * distToPoints[secondD] * distToPoints[thirdD];
    }
  }
  cout << ans << endl;
  return 0;
}