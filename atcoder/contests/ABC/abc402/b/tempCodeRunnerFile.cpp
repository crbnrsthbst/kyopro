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

  int q;
  cin >> q;
  queue<int> que;
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      que.push(x);
    } else {
      cout << que.front() << endl;
      que.pop();
    }
  }
  return 0;
}