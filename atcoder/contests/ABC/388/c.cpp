#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) { cin >> a[i]; }
  sort(a.begin(), a.end());

  long long cnt = 0;
  rep(i, n) {
    int ok = 0;
    int ng = n;
    while (ng - ok > 1) {
      int mid = (ok + ng) / 2;
      if (a[mid] <= a[i] / 2) {
        ok = mid;
      } else {
        ng = mid;
      }
    }
    if (a[ok] <= a[i] / 2) {
      cnt += ok + 1;
    }
  }
  cout << cnt << endl;

  return 0;
}