#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  vector<unsigned long long> A(n);
  rep(i, n) cin >> A[i];

  unsigned long long now = 1;
  rep(i, n) {
    now *= A[i];
    if (to_string(now).length() >= k + 1) {
      now = 1;
    }
  }

  cout << now << endl;
  return 0;
}