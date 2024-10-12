#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  string s;
  cin >> n >> s;
  int cnt = 0;
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == '#' && s[i + 2] == '#' && s[i + 1] == '.') cnt++;
  }

  cout << cnt << endl;

  return 0;
}