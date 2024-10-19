#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, q;
  cin >> n >> q;
  int l, r;
  l = 1;
  r = 2;
  int total = 0;
  rep(i, q) {
    char h;
    int t;
    cin >> h >> t;
    bool reachedT = false;
    int now;
    if (h == 'R') {
      now = r;
    } else {
      now = l;
    }
    int cnt = 0;
    while (true) {
      if (now != n) {
        now++;
      } else {
        now = 1;
      }
      cnt++;
      if (h == 'R' && now == l || h == 'L' && now == r) {
        break;
      }
      if (now == t) {
        reachedT = true;
        break;
      }
    }
    if (reachedT) {
      total += cnt;
    } else {
      int handPos = h == 'R' ? r : l;
      if (t > handPos) {
        total += handPos + (n - t);
      } else {
        total += handPos - t;
      }
    }
    if (h == 'R') {
      r = t;
    } else {
      l = t;
    }
  }
  cout << total << endl;
  return 0;
}