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

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int c = 0;
  int q = 0;
  rep(i, n) {
    if (s[i] == '?') {
      q++;
      if ((i != 0 && s[i - 1] == 'o') || (i != n - 1 && s[i + 1] == 'o')) {
        s[i] = '.';
        q--;
      }
    } else if (s[i] == 'o') {
      c++;
    }
  }
  if (k == c) {
    rep(i, n) {
      if (s[i] == '?') {
        s[i] = '.';
      }
    }
  } else if (q == k - c) {
    rep(i, n) {
      if (s[i] == '?') {
        s[i] = 'o';
      }
    }
  }

  cout << s << endl;
  return 0;
}