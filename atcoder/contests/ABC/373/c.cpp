#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  int maxA = -1000000001;
  int maxB = -1000000001;
  rep(i, n) {
    int a;
    cin >> a;
    maxA = max(maxA, a);
  }
  rep(i, n) {
    int b;
    cin >> b;
    maxB = max(maxB, b);
  }
  cout << maxA + maxB << endl;

  return 0;
}