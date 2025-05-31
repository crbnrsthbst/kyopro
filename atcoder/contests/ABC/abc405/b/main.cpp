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
  map<int, int> cnt;
  vector<int> A(n);
  set<int> found;
  rep(i, n) {
    int a;
    cin >> a;
    A[i] = a;
    cnt[a]++;
    found.insert(a);
  }
  if (found.size() < m) {
    cout << 0 << endl;
    return 0;
  }
  int del = 0;
  rep(i, n) {
    cnt[A[n - 1 - i]]--;
    del++;
    if (!cnt[A[n - 1 - i]]) {
      cout << del << endl;
      return 0;
    }
  }
  return 0;
}