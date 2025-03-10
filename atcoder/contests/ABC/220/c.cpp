#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int n;

  cin >> n;
  vector<ll> A(n);
  rep(i, n) cin >> A[i];
  ll x;
  cin >> x;

  ll sumA = 0;
  for (auto a : A) {
    sumA += a;
  }

  ll sho = x / sumA;
  ll amari = x % sumA;

  ll sum = 0;
  ll amariNums = 0;
  if (amari != 0) {
    rep(i, n) {
      sum += A[i];
      if (sum > amari) {
        amariNums = i + 1;
        break;
      }
    }
  } else {
    amariNums = 1;
  }

  cout << A.size() * sho + amariNums << endl;

  return 0;
}