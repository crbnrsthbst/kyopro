#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;
ll n, x, cnt = 0, total = 1;

void dfs(ll bagNum, ll ball, vector<vector<ll>> &bags) {
  total *= ball;
  if (bagNum == n - 1) {
    if (total == x) {
      cnt++;
    }
    return;
  }
  for (auto b : bags[bagNum + 1]) {
    if (total > x / b) continue;
    dfs(bagNum + 1, b, bags);
    total /= b;
  }
}

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);
  cin >> n >> x;
  vector<vector<ll>> bags(n, vector<ll>());
  rep(i, n) {
    int l;
    cin >> l;
    rep(j, l) {
      ll a;
      cin >> a;
      bags[i].push_back(a);
    }
  }
  for (auto b : bags[0]) {
    total = 1;
    dfs(0, b, bags);
  }
  cout << cnt << endl;
  return 0;
}