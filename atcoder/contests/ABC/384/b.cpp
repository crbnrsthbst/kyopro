#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, r;
  cin >> n >> r;
  rep(i, n) {
    int d, a;
    cin >> d >> a;

    int min, max;

    if (d == 1) {
      min = 1600;
      max = 2799;
    } else {
      min = 1200;
      max = 2399;
    }
    bool changeRate = false;
    if (r >= min && r <= max) {
      r += a;
    }
  }
  cout << r << endl;
  return 0;
}