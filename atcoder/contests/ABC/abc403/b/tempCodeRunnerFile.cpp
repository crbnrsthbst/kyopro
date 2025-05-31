#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);
  string t, u;
  cin >> t >> u;

  rep(i, t.length()) {
    int ui = 0;
    for (int j = i; j <= i + u.length() - 1; j++) {
      if (t[j] != '?' && t[j] != u[ui]) {
        break;
      }
      if (j == i + u.length() - 1) {
        cout << "Yes" << endl;
        return 0;
      }
      ui++;
    }
  }

  cout << "No" << endl;
  return 0;
}