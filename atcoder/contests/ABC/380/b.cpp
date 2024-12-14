#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string s;
  cin >> s;
  vector<int> a;

  int cnt = 0;
  rep(i, s.length()) {
    if (i == 0) continue;
    if (s[i] == '-') {
      cnt++;
    } else {
      a.push_back(cnt);
      cnt = 0;
    }
  }

  rep(i, a.size()){
    cout << a[i] << " ";
  }

  return 0;
}