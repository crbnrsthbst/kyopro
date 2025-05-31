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

  int r, x;
  cin >> r >> x;

  bool ans;
  if (x == 1) {
    if (r >= 1600 && r <= 2999) {
      ans = true;
    } else {
      ans = false;
    }
  } else {
    if (r >= 1200 && r <= 2399) {
      ans = true;
    } else {
      ans = false;
    }
  }

  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}