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

  int n, q;
  cin >> n >> q;

  map<int, int> boxToNumBalls;
  map<int, set<int>> NumBallsToBox;
  rep1(i, n) { NumBallsToBox[0].insert(i); }
  rep(i, q) {
    int x;
    cin >> x;
    int target;
    if (x >= 1) {
      target = x;
    } else {
      target = *(NumBallsToBox.begin()->second.begin());
    }
    boxToNumBalls[target]++;
    if (NumBallsToBox[boxToNumBalls[target] - 1].count(target)) {
      NumBallsToBox[boxToNumBalls[target] - 1].erase(target);
      if (!NumBallsToBox[boxToNumBalls[target] - 1].size()) {
        NumBallsToBox.erase(boxToNumBalls[target] - 1);
      }
    }
    NumBallsToBox[boxToNumBalls[target]].insert(target);
    cout << target << " ";
  }

  return 0;
}