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
  string s;
  cin >> s;
  vector<pair<int, int>> weightToAge(n);
  rep(i, n) {
    int w;
    cin >> w;
    weightToAge[i] = {w, int(s[i] - '0')};
  }

  sort(all(weightToAge));

  int correctCnt = 0;
  vector<int> xs;

  rep(i, n - 1) {
    if (weightToAge[i].first != weightToAge[i + 1].first) {
      xs.push_back(i);
    }
  }

  rep(i, n) {
    if (weightToAge[i].second) {
      correctCnt++;
    }
  }
  int correctCntAllAdult = correctCnt, ans = correctCnt;

  rep(i, xs.size()) {
    int start = i == 0 ? 0 : xs[i - 1] + 1;
    for (int j = start; j <= xs[i]; j++) {
      if (weightToAge[j].second) {
        correctCnt--;
      } else {
        correctCnt++;
      }
    }
    ans = max(ans, correctCnt);
  }
  ans = max(ans, n - correctCntAllAdult);
  cout << ans << endl;
  return 0;
}