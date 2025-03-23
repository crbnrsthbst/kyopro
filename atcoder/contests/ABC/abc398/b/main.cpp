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
  vector<int> A(7);
  rep(i, 7) cin >> A[i];

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      if (j == 1) {
        continue;
      }
      vector<int> cards;
      for (int k = 0; k < 7; k++) {
        if (k == i || k == j) {
          continue;
        }
        cards.push_back(A[k]);
      }
      sort(all(cards));
      if ((cards[0] == cards[1] && cards[1] != cards[2] &&
           cards[2] == cards[3] && cards[3] == cards[4]) ||
          (cards[0] == cards[1] && cards[1] == cards[2] &&
           cards[2] != cards[3] && cards[3] == cards[4])) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;

  return 0;
}