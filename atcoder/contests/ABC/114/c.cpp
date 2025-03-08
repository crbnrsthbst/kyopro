#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int n;
const int d[3] = {3, 5, 7};

bool is753(vector<int> &a) {
  bool exists3 = false, exists5 = false, exists7 = false;
  int num = 0;
  rep(i, a.size()) {
    num += a[a.size() - 1 - i] * pow(10, i);
    if (a[i] == 3) {
      exists3 = true;
    } else if (a[i] == 5) {
      exists5 = true;
    } else if (a[i] == 7) {
      exists7 = true;
    }
  }

  return exists3 && exists5 && exists7;
}

bool isBiggerThanN(vector<int> &a) {
  int num = 0;
  rep(i, a.size()) { num += a[a.size() - 1 - i] * pow(10, i); }
  return num > n;
}
int dfs(vector<int> &a) {
  int cnt = 0;
  if (isBiggerThanN(a)) {
    return 0;
  }
  if (is753(a)) {
    cnt++;
  }
  rep(i, 3) {
    a.push_back(d[i]);
    cnt += dfs(a);
    a.pop_back();
  }
  return cnt;
}
int main() {
  cin >> n;
  int cnt = 0;
  rep(i, 3) {
    vector<int> a(1, d[i]);
    cnt += dfs(a);
  }
  cout << cnt << endl;

  return 0;
}
