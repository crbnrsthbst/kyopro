#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)

int main() {
  int n;
  cin >> n;
  vector<long double> a(n);
  rep(i, n) { cin >> a[i]; }

  long double commonDiff = a[1] / a[0];
  string ans = "Yes";
  for (int i = 1; i < n; i++) {
    long double diff = a[i] / a[i - 1];
    if (diff != commonDiff) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;
  return 0;
}