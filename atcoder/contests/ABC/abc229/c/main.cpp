#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int n, w;
  cin >> n >> w;
  vector<pair<int, int>> AB(n);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    AB[i] = {a, b};
  }
  sort(all(AB), greater<>());

  int totalWeight = 0;
  ll totalDel = 0;
  rep(i, n) {
    ll weightToEat = min(AB[i].second, w - totalWeight);
    totalDel += AB[i].first * weightToEat;
    totalWeight += weightToEat;
    if (totalWeight >= w) {
      break;
    }
  }
  cout << totalDel << endl;

  return 0;
}