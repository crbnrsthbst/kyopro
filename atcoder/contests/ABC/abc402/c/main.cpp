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

  int n, m;
  cin >> n >> m;
  vector<unordered_set<int>> A(m);
  unordered_map<int, unordered_set<int>> ingToMenu;
  vector<int> hatedCnt(m);
  rep(i, m) {
    int k;
    cin >> k;
    hatedCnt[i] = k;
    rep(j, k) {
      int a;
      cin >> a;
      a--;
      ingToMenu[a].insert(i);
    }
  }

  vector<int> ans;
  int now = 0;
  rep(i, n) {
    int b;
    cin >> b;
    b--;
    for (auto p : ingToMenu[b]) {
      hatedCnt[p]--;
      if (!hatedCnt[p]) {
        now++;
      }
    }
    ans.push_back(now);
  }
  for (auto n : ans) {
    cout << n << endl;
  }
  return 0;
}