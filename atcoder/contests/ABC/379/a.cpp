#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  int a, b, c;
  a = n / 100;
  b = (n - 100 * a) / 10;
  c = n - 100 * a - 10 * b;

  cout << b << c << a << endl;
  cout << c << a << b << endl;

  return 0;
}