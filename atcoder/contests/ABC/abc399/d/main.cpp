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

  int t;
  cin >> t;
  rep(i, t) {
    int n;
    cin >> n;
    vector<pair<int, int>> ps;
    int lastB = 0;
    rep(j, n) {
      int a, b;
      cin >> a >> b;
      if (lastB != a && a != b) {
        ps.push_back({min(a, b), max(a, b)});
        if (lastB != 0) {
          ps.push_back({min(lastB, a), max(lastB, a)});
        } else {
          lastB = -1;
        }
      }
      lastB = b;
    }
    sort(all(ps), [&](pair<int, int> i, pair<int, int> j) {
      if (i.first == j.first) return i.second < j.second;
      return i.first < j.first;
    });
    int lastFirst = 0, lastSecond = 0;
    int ans = 0;
    for (auto p : ps) {
      if (lastFirst == p.first && lastSecond == p.second) {
        ans++;
      }
      lastFirst = p.first;
      lastSecond = p.second;
    }
    cout << ans << endl;
  }

  return 0;
}