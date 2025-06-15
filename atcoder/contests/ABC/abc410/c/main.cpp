#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
int n, q;

int nowToOriginal(int now, int move) {
  if (move % n == 0) {
    return now;
  }
  int raw = now + move % n;
  return raw > n ? raw - n : raw;
}

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  cin >> n >> q;
  vector<int> A(n);
  rep(i, n) { A[i] = i + 1; }

  int move = 0;
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 1) {
      int p, x;
      cin >> p >> x;
      A[nowToOriginal(p, move) - 1] = x;
    } else if (t == 2) {
      int p;
      cin >> p;
      cout << A[nowToOriginal(p, move) - 1] << endl;
    } else {
      int k;
      cin >> k;
      move += k;
      move %= n;
    }
  }
  return 0;
}