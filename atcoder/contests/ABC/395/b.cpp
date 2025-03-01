#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  vector<vector<char>> g(n, vector<char>(n));

  int numChange;
  if (n % 2 == 0) {
    numChange = n / 2;
  } else {
    numChange = n / 2 + 1;
  }

  rep(i, numChange) {
    int lX, rX, tY, bY;
    lX = i;
    rX = (n - 1) - i;
    tY = i;
    bY = (n - 1) - i;
    char c;
    if (i % 2 == 0) {
      c = '#';
    } else {
      c = '.';
    }

    for (int x = lX; x <= rX; x++) {
      g[tY][x] = c;
      g[bY][x] = c;
    }
    for (int y = tY; y <= bY; y++) {
      g[y][lX] = c;
      g[y][rX] = c;
    }
  }

  rep(i, n) {
    rep(j, n) { cout << g[i][j]; }
    cout << endl;
  }

  return 0;
}