// https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  rep(i, n) {
    rep(j, m) { cin >> a[i][j]; }
  }

  long long score;
  long long maxScore = 0;
  rep(i, m) {
    rep(j, m) {
      if (i == j) continue;
      score = 0;
      rep(k, n) { score += max(a[k][i], a[k][j]); }
      maxScore = max(maxScore, score);
    }
  }
  cout << maxScore << endl;
  return 0;
}