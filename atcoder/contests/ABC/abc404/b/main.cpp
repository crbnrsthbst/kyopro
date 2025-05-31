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
  vector<string> s(n), t(n);
  rep(i, n) { cin >> s[i]; }
  rep(i, n) { cin >> t[i]; }

  int optRotate = 0, maxSame = -1;
  rep(i, 4) {
    int sameCnt = 0;
    rep(i, n) {
      rep(j, n) {
        
        if (s[i][j] == t[i][j]) {
          sameCnt++;
        }
      }
    }
    if (sameCnt > maxSame) {
      maxSame = sameCnt;
      optRotate = i;
    }
  }

  cout << optRotate + n * n - maxSame << endl;
  return 0;
}