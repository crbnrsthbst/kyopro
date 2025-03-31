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

  int n;
  cin >> n;
  vector<pair<int, int>> p(n);
  rep(i, n) {
    int score;
    cin >> score;
    p[i] = {score, i};
  }
  sort(p.rbegin(), p.rend());

  int x = p[0].first;
  int k = 1;
  vector<int> ans(n);
  int r = 1;
  ans[p[0].second] = 1;
  for (int i = 1; i < n; i++) {
    if (x == p[i].first) {
      k++;
    } else {
      r += k;
      k = 1;
      x = p[i].first;
    }
    ans[p[i].second] = r;
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}