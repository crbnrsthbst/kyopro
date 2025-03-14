#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) { cin >> x[i] >> y[i]; }
  rep(i, n) {
    rep(j, n) {
      if (j == i) {
        continue;
      }
      rep(k, n) {
        if (k == i || k == j) {
          continue;
        }
        
      }
    }
  }
  return 0;
}