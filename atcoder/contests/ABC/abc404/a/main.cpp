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

  string s;
  cin >> s;
  sort(all(s));

  vector<bool> found(26);

  rep(i, s.length()) {
    int num = s[i] - 'a';
    found[num] = true;
  }

  rep(i, 26) {
    if (!found[i]) {
      cout << (char)('a' + i) << endl;
      return 0;
    }
  }
  return 0;
}