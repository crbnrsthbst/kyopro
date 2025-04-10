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

  ll n, m;
  cin >> n >> m;

  ll sum = 0;
  rep(i, m + 1) {
    sum += pow(n, i);
    if (sum > 1000000000) {
      cout << "inf" << endl;
      return 0;
    }
  }
  cout << sum << endl;
  return 0;
}