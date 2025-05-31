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
  int n;
  cin >> n;
  vector<int> A(n);
  rep(i, n) cin >> A[i];

  int sum = 0;

  rep(i, n) {
    if (i % 2 == 0) {
      sum += A[i];
    }
  }
  cout << sum << endl;
  return 0;
}