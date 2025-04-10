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

  int n, k;
  cin >> n >> k;
  vector<int> A(n);
  rep(i, n) cin >> A[i];

  vector<int> processedA(n);
  rep(i, k) {
    int crs = i;
    vector<int> v;
    while (crs < n) {
      v.push_back(A[crs]);
      crs += k;
    }
    sort(all(v));
    crs = i;
    int vi = 0;
    for (int a : v) {
      processedA[crs] = a;
      crs += k;
    }
  }
  sort(all(A));
  rep(i, n) {
    if (A[i] != processedA[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}