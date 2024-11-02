#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int N;
  cin >> N;
  map<int, int> rightIndex;

  rep(i, N) {
    int a;
    cin >> a;
    int ans;
    if (rightIndex.count(a) == 0) {
      ans = -1;
    } else {
      ans = rightIndex[a];
    }
    cout << ans << endl;
    rightIndex[a] = i + 1;
  }
  return 0;
}
