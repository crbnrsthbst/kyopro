#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  int water = 0;
  int lastT = 0;
  rep(i, n) {
    int t, v;
    cin >> t >> v;
    water -= (t - lastT);
    if (water < 0) water = 0;
    lastT = t;
    water += v;
  }
  cout << water << endl;
  return 0;
}