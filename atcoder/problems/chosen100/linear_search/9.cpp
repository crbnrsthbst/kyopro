// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  int m, n;
  cin >> m;

  vector<pair<int, int>> target(m);
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    target[i] = {x, y};
  }
  vector<pair<int, int>> distFromFirstStar(m);
  int moveX, moveY;
  rep(i, m) {
    if (i == 0) {
      moveX = 0 - target[i].first;
      moveY = 0 - target[i].second;
      distFromFirstStar[i] = {0, 0};
    } else {
      distFromFirstStar[i] = {target[i].first + moveX,
                              target[i].second + moveY};
    }
  }
  cin >> n;
  set<pair<int, int>> stars;
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    stars.insert({x, y});
  }

  int ansX, ansY;
  for (auto s : stars) {
    bool isOk = true;
    rep(i, m) {
      int x, y;
      x = s.first;
      y = s.second;
      if (stars.count({x + distFromFirstStar[i].first,
                       y + distFromFirstStar[i].second}) == 0) {
        isOk = false;
        break;
      }
    }
    if (isOk) {
      ansX = s.first - target[0].first;
      ansY = s.second - target[0].second;
    }
  }

  cout << ansX << " " << ansY << endl;
  return 0;
}