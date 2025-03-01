#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) { cin >> a[i]; }
  vector<int> lastIndex(pow(10, 6), -1);
  vector<int> shortest(pow(10, 6), -1);
  rep(i, n) {
    int x = a[i] - 1;
    if (lastIndex[x] != -1) {
      int dist = i - lastIndex[x] + 1;
      if (shortest[x] == -1) {
        shortest[x] = dist;
      } else {
        shortest[x] = min(shortest[x], dist);
      }
    }
    lastIndex[x] = i;
  }
  sort(shortest.begin(), shortest.end());

  rep(i, shortest.size()) {
    if (shortest[i] != -1) {
      cout << shortest[i] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}