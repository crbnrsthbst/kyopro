#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string d;
  cin >> d;
  string ans;
  for (int i = 0; i < d.length(); i++) {
    char opp;
    if (d[i] == 'N') {
      opp = 'S';
    } else if (d[i] == 'E') {
      opp = 'W';
    } else if (d[i] == 'W') {
      opp = 'E';
    } else {
      opp = 'N';
    }
    cout << opp;
  }
  cout << endl;
  return 0;
}