// https://atcoder.jp/contests/joi2011yo/tasks/joi2011yo_e
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

int X[8];
int Y[8];
int main() {
  int n;
  cin >> n;
  rep(i, n) { cin >> X[i] >> Y[i]; }
  vector<int> ord;
  rep(i, n) ord.push_back(i);
  long double total = 0;
  long double ps = 0;
  do {
    rep(i, n - 1) {
      long double fromX = X[ord[i]];
      long double fromY = Y[ord[i]];
      long double toX = X[ord[i + 1]];
      long double toY = Y[ord[i + 1]];
      total += sqrt(pow(fromX - toX, 2) + pow(fromY - toY, 2));
    }
    ps++;
  } while (next_permutation(all(ord)));
  printf("%.10Lf\n", (total) / ps);
  return 0;
}