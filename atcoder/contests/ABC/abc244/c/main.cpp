#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define all(a) a.begin(), a.end()
using ll = long long;
using Graph = vector<vector<char>>;

int main() {
  std::cin.tie(nullptr);
  std::ios::sync_with_stdio(false);

  int n;
  cin >> n;
  unordered_set<int> available;
  rep1(i, 2 * n + 1) { available.insert(i); }

  while (true) {
    cout << *available.begin() << endl;
    available.erase(*available.begin());
    int a;
    cin >> a;
    if (a == 0) {
      return 0;
    }
    available.erase(a);
  }
  return 0;
}