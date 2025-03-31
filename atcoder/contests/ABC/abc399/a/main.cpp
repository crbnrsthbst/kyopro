#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n;
  string s, t;
  cin >> n >> s >> t;
  int ans = 0;
  rep(i, n) {
    if (s[i] != t[i]) ans++;
  }

  cout << ans << endl;
  return 0;
}