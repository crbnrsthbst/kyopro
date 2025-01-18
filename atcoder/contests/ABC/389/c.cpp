#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

long long cal(int n) {
  if (n == 1) return 1;
  return n * cal(n - 1);
}
int main() {
  long long x;
  cin >> x;

  int n = 2;
  long long total = 1;
  while (true) {
    total *= n;
    if (total == x) {
      break;
    }
    n++;
  }
  cout << n << endl;
  return 0;
}