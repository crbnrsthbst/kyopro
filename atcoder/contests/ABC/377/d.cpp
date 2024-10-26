#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

int main() {
  int n, m;
  cin >> n >> m;
  // int minL = m;
  // int maxR = 1;

  vector<int> Ls(n);
  vector<int> Rs(n);
  map<int, vector<int>> LR;
  rep(i, n) {
    int L, R;
    cin >> L >> R;
    Ls[i] = L;
    Rs[i] = R;

    if (LR.count(L) == 0) {
      vector<int> rs;
      rs.push_back(R);
      LR[L] = rs;
    } else {
      LR.at(L).push_back(R);
    }
  }
  for (auto rs : LR) {
    sort(rs.second.begin(), rs.second.end());
  }
  sort(Ls.begin(), Ls.end());
  long long ans = 0;
  rep1(l, m) {
    // lを固定したときに　条件を満たすrが何通りあるか
    // Li >= l の 一番左の区間

    int left = -1;
    int right = Ls.size() + 1;
    while (right - left > 1) {
      int mid = (left + right) / 2;
      if (Ls[mid] >= l) {
        right = mid;
      } else {
        left = mid;
      }
    }
    if (right = Ls.size() + 1) {
      ans += m - l;
    } else {
      ans += m - LR[l][0] - 1;
    }
  }
  cout << ans;
  return 0;
}