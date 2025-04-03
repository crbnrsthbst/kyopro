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

  int n, q;
  cin >> n >> q;
  vector<int> ballToPosition(n), positionToBall(n);
  rep(i, n) {
    ballToPosition[i] = i;
    positionToBall[i] = i;
  }
  vector<int> x(q);
  rep(i, q) {
    int b;
    cin >> b;
    b--;
    x[i] = b;
  }

  rep(i, q) {
    int positionX = ballToPosition[x[i]], positionY;
    if (positionX == n - 1) {
      positionY = positionX - 1;
    } else {
      positionY = positionX + 1;
    }
    int y = positionToBall[positionY];
    ballToPosition[x[i]] = positionY;
    ballToPosition[y] = positionX;
    positionToBall[positionX] = y;
    positionToBall[positionY] = x[i];
  }

  for (int b : positionToBall) {
    cout << b + 1 << " ";
  }
  return 0;
}