#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  char c1,c2;
  string s;
  cin >> n >> c1 >> c2 >> s;

  rep(i, n) {
    char c;
    if (s[i] == c1) {
      c = s[i];
    } else {
      c = c2;
    }
    cout << c;
  }
  cout << endl;
  return 0;
}