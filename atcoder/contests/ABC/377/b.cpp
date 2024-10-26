#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string g[8];
  char gm[8][8];

  rep(i, 8) { cin >> g[i]; }
  rep(i, 8) {
    rep(j, 8) {
      if (g[i][j] == '#') {
        rep(k, 8) {
          gm[i][k] = '#';
          gm[k][j] = '#';
        }
      }
    }
  }
  int cnt = 0;
  rep(i, 8) {
    rep(j, 8) {
      if (gm[i][j] != '#') cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}