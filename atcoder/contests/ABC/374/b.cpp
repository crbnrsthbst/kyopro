#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;

  double lastX, lastY;
  lastX = 0;
  lastY = 0;
  double sum = 0;
  rep(i, n) {
    double x, y;
    cin >> x >> y;
    sum += sqrt(pow(abs(x - lastX), 2) + pow(abs(y - lastY), 2));
    lastX = x;
    lastY = y;
  }
  sum += sqrt(pow(abs(0 - lastX), 2) + pow(abs(0 - lastY), 2));
  cout << setprecision(10) << sum;
}