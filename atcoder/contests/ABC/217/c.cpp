#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  int n;
  cin >> n;
  int p[n];
  rep(i, n) { cin >> p[i]; }
  int q[n];
  rep(i, n) { q[p[i] - 1] = i + 1; }
  rep(i, n) { cout << q[i] << " "; }
  cout << endl;
}