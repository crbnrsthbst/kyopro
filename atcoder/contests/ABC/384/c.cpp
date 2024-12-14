#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  string ss[] = {"A", "B", "C", "D", "E"};
  int score[5];
  rep(i, 5) { cin >> score[i]; }
  vector<pair<int, string>> scores;
  for (int name = 1; name < (1 << 5); name++) {
    int total = 0;
    string nameS = "";
    rep(i, 5) {
      if ((name & (1 << i)) != 0) {
        total += score[i];
        nameS += ss[i];
      }
    }
    scores.push_back({total, nameS});
  }

  sort(scores.begin(), scores.end(),
       [&](pair<int, string> i, pair<int, string> j) {
         if (i.first != j.first) return i.first > j.first;
         return i.second < j.second;
       });
  for (auto score : scores) {
    cout << score.second << endl;
  }
  return 0;
}