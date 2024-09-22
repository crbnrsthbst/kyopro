// https://atcoder.jp/contests/abc150/tasks/abc150_c
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

int main() {
  int n;
  cin >> n;
  int p[n];
  int q[n];
  vector<int> nums(n);
  rep(i, n) { nums[i] = i + 1; }
  rep(i, n) { cin >> p[i]; }
  rep(i, n) { cin >> q[i]; }

  int ord = 0;
  int ordP = 0;
  int ordQ = 0;
  do {
    bool isP = true;
    bool isQ = true;
    rep(i, n) {
      if (nums[i] != p[i]) {
        isP = false;
      }
      if (nums[i] != q[i]) {
        isQ = false;
      }
    }
    if (isP) {
      ordP = ord;
    }
    if (isQ) {
      ordQ = ord;
    }
    ord++;
  } while (next_permutation(all(nums)));
  cout << abs(ordP - ordQ) << endl;
  return 0;
}