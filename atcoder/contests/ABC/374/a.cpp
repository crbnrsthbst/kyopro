#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string s;
  cin >> s;

  if (s.substr(s.length() - 3, 3) == "san") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}