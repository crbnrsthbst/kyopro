#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n;
  cin >> n;
  string t, a;
  cin >> t >> a;

  rep(i, n) {
    if (t[i] == 'o' && a[i] == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}