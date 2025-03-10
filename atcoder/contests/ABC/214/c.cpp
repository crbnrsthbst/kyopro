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
  vector<ll> s(n), t(n);
  rep(i, n) cin >> s[i];
  rep(i, n) cin >> t[i];

  vector<ll> firstTime(n);
  firstTime[0] = t[0];
  rep2(i, 1, n) { firstTime[i] = min(firstTime[i - 1] + s[i - 1], t[i]); }
  firstTime[0] = min(t[0], firstTime[n - 1] + s[n - 1]);
  rep2(i, 1, n) {
    firstTime[i] = min(firstTime[i], firstTime[i - 1] + s[i - 1]);
  }
  for (auto t : firstTime) cout << t << endl;
  return 0;
}