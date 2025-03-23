#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);
  int n;
  cin >> n;
  if (n == 1) {
    cout << '=' << endl;
  } else if (n == 2) {
    cout << "==" << endl;
  } else {
    if (n % 2 == 0) {
      int x = n / 2 - 1;
      rep(i, n) {
        if (i == x || i == x + 1) {
          cout << '=';
          continue;
        }
        cout << '-';
      }
    } else {
      int x = n / 2;
      rep(i, n) {
        if (i == x) {
          cout << '=';
          continue;
        }
        cout << '-';
      }
    }
    cout << endl;
  }

  return 0;
}