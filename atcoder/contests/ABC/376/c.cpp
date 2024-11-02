#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) { cin >> a[i]; }
  rep(i, n - 1) { cin >> b[i]; }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  // xはaのどれか

  int ng = -1;
  int ok = n - 2;
  while (ok - ng > 1) {
    int mid = (ok + ng) / 2;
    bool isOk = true;
    int now = 0;
    rep(i, n) {
      if (i == mid) continue;
      if (a[i] > b[now]) isOk = false;
      now++;
    }
    if (isOk) {
      ok = mid;
    } else {
      ng = mid;
    }
  }

  if (ok == n-2) {
    cout << -1 << endl;
  } else {
    cout << a[ok] << endl;
  }

  return 0;
}
