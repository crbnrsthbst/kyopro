#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  long long k[n];
  long long totalEmp = 0;
  rep(i, n) {
    cin >> k[i];
    totalEmp += k[i];
  }

  long long ans = 0;
  long long minMax = 10000000000;
  rep(group, (1 << n)) {
    long long sumA = 0;
    rep(i, n) {
      if (group & (1 << i)) {
        sumA += k[i];
      }
    }
    long long m = max(sumA, totalEmp - sumA);
    minMax = min(minMax, m);
  }

  cout << minMax << endl;
  return 0;
}
