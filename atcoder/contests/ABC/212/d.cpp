#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;

  vector<vector<int>> dices(n, vector<int>());
  rep(i, n) {
    int k;
    cin >> k;
    rep(j, k) {
      int a;
      cin >> a;
      dices[i].push_back(a);
    }
  }

  
  return 0;
}