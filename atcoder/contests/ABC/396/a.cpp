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

  int okCnt = 0;
  int last = a[0];
  bool ok = false;
  rep(i, n) {
    if (a[i] == last) {
      okCnt++;
    } else {
      okCnt = 1;
    }
    if (okCnt >= 3) {
      ok = true;
      break;
    }
    last = a[i];
  }

  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}