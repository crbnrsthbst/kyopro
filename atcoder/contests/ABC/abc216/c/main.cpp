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

  ll n;
  cin >> n;

  vector<char> ans;
  while (n > 0) {
    if (n % 2 == 0) {
      n /= 2;
      ans.push_back('B');
    } else {
      n--;
      ans.push_back('A');
    }
  }

  rep(i, ans.size()) { cout << ans[ans.size() - 1 - i]; }
  cout << endl;

  return 0;
}