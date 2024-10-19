#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, c;
  cin >> n >> c;
  int lastGet = -1;
  int cnt = 0;
  rep(i, n) {
    int t;
    cin >> t;
    if (i == 0) {
      cnt++;
      lastGet = t;
    } else {
      if (t - lastGet >= c) {
        cnt++;
        lastGet = t;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}