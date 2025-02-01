#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> nests(n);
  vector<int> pigeons(n);
  rep(i, n) { nests[i] = 1; }
  rep(i, n) { pigeons[i] = i; }
  int cnt = 0;
  rep(i, q) {
    int type;
    cin >> type;

    if (type == 1) {
      int p, h;
      cin >> p >> h;
      nests[h - 1]++;
      if (nests[h - 1] == 2) {
        cnt++;
      }
      nests[pigeons[p - 1]]--;
      if (nests[pigeons[p - 1]] == 1) {
        cnt--;
      }
      pigeons[p - 1] = h - 1;
    } else {
      cout << cnt << endl;
    }
  }
  return 0;
}