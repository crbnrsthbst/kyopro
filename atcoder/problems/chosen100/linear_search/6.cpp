// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<int> firstAppearIndex;
  firstAppearIndex.assign(10, -1);
  rep(i, n - 2) {
    int num = int(s[i] - '0');
    if (firstAppearIndex[num] != -1) {
      continue;
    }
    firstAppearIndex[num] = i;
  }

  int firstDigit;
  int cnt = 0;
  rep(i, 10) {
    if (firstAppearIndex[i] == -1) {
      continue;
    }
    vector<int> firstAppearIndexForSecondDigit;
    firstAppearIndexForSecondDigit.assign(10, -1);
    for (int j = firstAppearIndex[i] + 1; j < n - 1; j++) {
      int num = int(s[j] - '0');
      if (firstAppearIndexForSecondDigit[num] != -1) {
        continue;
      }
      firstAppearIndexForSecondDigit[num] = j;
    }
    rep(j, 10) {
      if (firstAppearIndexForSecondDigit[j] == -1) {
        continue;
      }
      vector<bool> found;
      found.assign(10, false);
      for (int k = firstAppearIndexForSecondDigit[j] + 1; k < n; k++) {
        if (!found[s[k]]) {
          cnt++;
          found[s[k]] = true;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}