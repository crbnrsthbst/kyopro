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

  int s;
  cin >> s;
  if (s >= 200 && s <= 299) {
    cout << "Success" << endl;
  } else {
    cout << "Failure" << endl;
  }
  return 0;
}