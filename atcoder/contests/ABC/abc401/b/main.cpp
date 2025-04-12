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

  int n;
  cin >> n;
  int ans = 0;
  bool loggedOut = true;
  rep(i, n) {
    string s;
    cin >> s;
    if (s == "login") {
      loggedOut = false;
    } else if (s == "logout") {
      loggedOut = true;
    } else if (s == "public") {
    } else {
      if (loggedOut) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}