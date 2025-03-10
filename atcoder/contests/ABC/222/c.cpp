#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;
bool won(char hand1, char hand2) {
  return hand1 == 'G' && hand2 == 'C' || hand1 == 'C' && hand2 == 'P' ||
         hand1 == 'P' && hand2 == 'G';
}
int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> hands(2 * n, vector<char>());
  rep(i, 2 * n) {
    rep(j, m) {
      char c;
      cin >> c;
      hands[i].push_back(c);
    }
  }
  vector<pair<int, int>> scorePerson(2 * n);
  rep(i, 2 * n) { scorePerson[i] = {0, i}; }

  rep(i, m) {
    rep1(j, n) {
      int p1 = scorePerson[2 * j - 2].second,
          p2 = scorePerson[2 * j - 1].second;
      if (hands[p1][i] != hands[p2][i]) {
        if (won(hands[p1][i], hands[p2][i])) {
          scorePerson[2 * j - 2].first++;
        } else {
          scorePerson[2 * j - 1].first++;
        }
      }
    }
    sort(all(scorePerson), [&](pair<int, int> i, pair<int, int> j) -> bool {
      if (i.first != j.first) return i.first > j.first;
      return i.second < j.second;
    });
  }

  for (auto sp : scorePerson) {
    cout << ++sp.second << endl;
  }

  return 0;
}