#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> a(n);
  rep(i, n) { a[i] = false; }
  rep(i, m) {
    int ai;
    cin >> ai;
    a[ai - 1] = true;
  }
  cout << n - m << endl;
  rep(i, n) {
    if (!a[i]) {
      cout << i + 1 << " ";
    }
  }
  return 0;
}