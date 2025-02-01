#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  vector<int> a(5);
  rep(i, 5) { cin >> a[i]; }

  bool changed = false;
  rep(i, 5) {
    if (a[i] != i + 1) {
      int ai = a[i];
      a[i] = a[i + 1];
      a[i + 1] = ai;
      changed = true;
      break;
    }
  }

  string ans = "Yes";
  if (!changed) ans = "No";
  rep(i, 5) {
    if (a[i] != i + 1) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}