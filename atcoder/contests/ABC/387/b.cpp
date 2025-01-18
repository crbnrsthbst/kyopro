#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  vector<int> nums(81);
  int x;
  cin >> x;
  int ans = 0;
  rep1(i, 9) {
    rep1(j, 9) {
      if (i * j != x) {
        ans += i * j;
      }
    }
  }
  cout << ans << endl;
  return 0;
}