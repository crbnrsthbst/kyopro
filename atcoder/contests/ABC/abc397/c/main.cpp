#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int maxType = 0;
  vector<int> numCntR = vector<int>(n + 1, 0);
  set<int> left, right;
  rep(i, n - 1) {
    if (i == 0) {
      left.insert(a[0]);
      rep1(j, n - 1) {
        numCntR[a[j]]++;
        if (!right.count(a[j])) {
          right.insert(a[j]);
        }
      }
    } else {
      numCntR[a[i]]--;
      if (numCntR[a[i]] == 0) {
        right.erase(a[i]);
      }
      if (!left.count(a[i])) {
        left.insert(a[i]);
      }
    }
    int leftS = left.size();
    int rightS = right.size();
    maxType = max(maxType, leftS + rightS);
  }
  cout << maxType << endl;
  return 0;
}