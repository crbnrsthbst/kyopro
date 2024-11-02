#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int a[4];
  rep(i, 4) { cin >> a[i]; }
  sort(a, a + 4);
  if (a[0] != a[1] && a[1] != a[2] && a[2] != a[3]) {
    cout << 0 << endl;
  } else if ((a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) ||
             (a[0] == a[1] && a[2] == a[3])) {
    cout << 2 << endl;
  } else {
    cout << 1 << endl;
  }
}