#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  vector<int> q(n);
  vector<int> zekkens(n);
  vector<int> lookingAts(n);
  rep(i, n) {
    int lookingAt;
    cin >> lookingAt;
    lookingAts[i] = lookingAt - 1;
  }
  rep(i, n) {
    int zekken;
    cin >> zekken;
    zekkens[zekken - 1] = i;
    q[i] = zekken;
  }

  rep(i, n) { cout << q[lookingAts[zekkens[i]]] << " "; }
  return 0;
}