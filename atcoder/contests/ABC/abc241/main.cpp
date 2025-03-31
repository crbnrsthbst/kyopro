#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<string> s(n);
  rep(i, n) cin >> s[i];

  rep(r, n) {
    int blackCnt = 0;
    for (int c = 0; c <= n - 6; c++) {
      if (c == 0) {
        rep(k, 6) {
          if (s[r][c + k] == '#') {
            blackCnt++;
          }
        }
      } else {
        if (s[r][c - 1] == '#') {
          blackCnt--;
        }
        if (s[r][c + 6 - 1] == '#') {
          blackCnt++;
        }
      }
      if (blackCnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  rep(c, n) {
    int blackCnt = 0;
    for (int r = 0; r <= n - 6; r++) {
      if (r == 0) {
        rep(k, 6) {
          if (s[r + k][c] == '#') {
            blackCnt++;
          }
        }
      } else {
        if (s[r - 1][c] == '#') {
          blackCnt--;
        }
        if (s[r + 6 - 1][c] == '#') {
          blackCnt++;
        }
      }
      if (blackCnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  for (int r = 0; r <= n - 6; r++) {
    for (int c = 0; c <= n - 6; c++) {
      int blackCnt = 0;
      rep(i, 6) {
        if (s[r + i][c + i] == '#') {
          blackCnt++;
        }
      }
      if (blackCnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  for (int r = 0; r <= n - 6; r++) {
    for (int c = 5; c < n; c++) {
      int blackCnt = 0;
      rep(i, 6) {
        if (s[r + i][c - i] == '#') {
          blackCnt++;
        }
      }
      if (blackCnt >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}