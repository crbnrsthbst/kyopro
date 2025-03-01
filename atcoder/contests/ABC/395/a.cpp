#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;

  int lastA;
  int ok = true;
  rep(i, n) {
    int a;
    cin >> a;
    if (i != 0 && a <= lastA) {
      ok = false;
      break;
    }
    lastA = a;
  }
  if (ok) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  return 0;
}