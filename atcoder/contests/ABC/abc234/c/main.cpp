#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);
  ll k;
  cin >> k;
  ll power = 1;
  ll lastTotalNums = 0;
  vector<int> ans;
  while (true) {
    ll totalNums = pow(2, power) - 1;
    if (k <= totalNums) {
      ans.push_back(2);
      ll positionInGroup = k - lastTotalNums - 1;
      for (ll i = power - 2; i >= 0; i--) {
        if ((1 << i) & positionInGroup) {
          ans.push_back(2);
        } else {
          ans.push_back(0);
        }
      }
      break;
    }
    power++;
    lastTotalNums = totalNums;
  }
  for (int n : ans) {
    cout << n;
  }
  cout << endl;
  return 0;
}