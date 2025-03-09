#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> A(n);
  rep(i, n) { cin >> A[i]; }
  vector<int> B(m);
  rep(i, m) { cin >> B[i]; }
  sort(all(A));
  sort(all(B));

  int minDiff = pow(10, 9);
  for (int a : A) {
    int diff;
    auto it = lower_bound(all(B), a);
    if (it == B.end()) {
      diff = a - B[m - 1];
    } else {
      if (it == B.begin()) {
        diff = B[0] - a;
      } else {
        int diff1 = *it - a;
        it--;
        int diff2 = abs(*it - a);
        diff = min(diff1, diff2);
      }
    }
    minDiff = min(minDiff, diff);
  }
  cout << minDiff << endl;
  return 0;
}