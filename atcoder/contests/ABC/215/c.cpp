#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main() {
  string s;
  int k;
  cin >> s >> k;
  sort(s.begin(), s.end());
  int cnt = 1;
  do {
    if (cnt == k) {
      cout << s << endl;
      return 0;
    }
    cnt++;
  } while (next_permutation(s.begin(), s.end()));
}