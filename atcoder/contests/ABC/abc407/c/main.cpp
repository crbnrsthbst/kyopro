#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int cnt = 0;
  rep(i, s.length()) {
    cnt++;
    int now = int(s[i] - '0');

    if (i != s.length() - 1) {
      int next = int(s[i + 1] - '0');
      int diff = now - next;
      if (diff < 0) {
        cnt += 10 + diff;
      } else {
        cnt += diff;
      }
    } else {
      cnt += int(s[i] - '0');
    }
  }

  cout << cnt << endl;
  return 0;
}