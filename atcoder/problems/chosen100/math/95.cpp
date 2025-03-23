#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using Graph = vector<vector<char>>;
using ll = long long;
void dfs() {}
int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  ll ta = a - min(a, k);
  ll ao = b - min(b, k - min(a, k));
  cout << ta << " " << ao << endl;
  return 0;
}