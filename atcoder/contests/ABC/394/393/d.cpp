#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()
int main() {
  string begins = "([<";
  string ends = ")]>";
  string s;
  cin >> s;
  if (s.length() == 1) {
    cout << "No" << endl;
    return 0;
  }
  stack<char> beginsWithoutEnd;
  rep(i, s.length()) {
    if (ends.find(s[i]) == string::npos) {
      beginsWithoutEnd.push(s[i]);
    } else {
      if (beginsWithoutEnd.size() == 0) {
        cout << "No" << endl;
        return 0;
      }
      if (begins.find(beginsWithoutEnd.top()) != ends.find(s[i])) {
        cout << "No" << endl;
        return 0;
      };
      beginsWithoutEnd.pop();
    }
  }
  if (beginsWithoutEnd.size() != 0) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}