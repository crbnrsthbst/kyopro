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

  int n, d;
  cin >> n >> d;
  vector<int> A(n);
  rep(i, n) cin >> A[i];

  unordered_map<int, int> numCnt;
  rep(i, n) { numCnt[A[i]]++; }

  int ans = 0;
  for (auto nToC : numCnt) {
    int a = nToC.first - d, b = nToC.first, c = nToC.first + d;
    if (!numCnt[b] || (!numCnt.count(a) && !numCnt.count(c))) {
      continue;
    }
    int aCnt = 0, cCnt = 0;
    if (numCnt.count(a)) aCnt += numCnt[a];
    if (numCnt.count(c)) cCnt += numCnt[c];

    if (aCnt + cCnt <= numCnt[b]) {
      ans += aCnt + cCnt;
      if (aCnt) numCnt[a] = 0;
      if (cCnt) numCnt[c] = 0;
    } else {
      ans += numCnt[b];
      numCnt[b] = 0;
    }
  }

  cout << ans << endl;
  return 0;
}