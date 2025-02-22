#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n;
  cin >> n;
  vector<pair<int, string>> ss;

  rep(i, n) {
    string s;
    cin >> s;
    ss.push_back({s.length(), s});
  }
  sort(ss.begin(), ss.end());
  rep(i, n) { cout << ss[i].second; }
  cout << endl;
  return 0;
}