// https://atcoder.jp/contests/joi2012yo/tasks/joi2012yo_e
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
const int dyOdd[6] = {-1, 0, 1, 1, 0, -1};
const int dxOdd[6] = {1, 1, 1, 0, -1, 0};
const int dyEven[6] = {-1, 0, 1, 1, 0, -1};
const int dxEven[6] = {0, 1, 0, -1, -1, -1};

int main() {
  int w, h;
  cin >> w >> h;
  int g[h + 2][w + 2];
  bool seen[h + 2][w + 2];
  rep(i, h + 2) {
    rep(j, w + 2) {
      if (i == 0 || i == h + 1 || j == 0 || j == w + 1) {
        g[i][j] = 0;
      } else {
        cin >> g[i][j];
      }
      seen[i][j] = false;
    }
  }

  queue<pair<int, int>> q;
  q.push({0, 0});
  seen[0][0] = true;
  int ans = 0;
  while (!q.empty()) {
    auto v = q.front();
    int y = v.first;
    int x = v.second;
    q.pop();
    rep(i, 6) {
      int nextY, nextX;
      if (y % 2 == 1) {
        nextY = y + dyOdd[i];
        nextX = x + dxOdd[i];
      } else {
        nextY = y + dyEven[i];
        nextX = x + dxEven[i];
      }
      if (nextY < 0 || nextY > h + 1 || nextX < 0 || nextX > w + 1) {
        continue;
      }
      if (seen[nextY][nextX]) {
        continue;
      }
      if (g[nextY][nextX] == 0) {
        seen[nextY][nextX] = true;
        q.push({nextY, nextX});
      } else {
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}