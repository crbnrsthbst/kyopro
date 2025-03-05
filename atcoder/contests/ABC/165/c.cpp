#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int n, m, q;
vector<int> a, b, c, d;

int calcScore(vector<int> &A) {
  int score = 0;
  rep(i, q) {
    if (A[b[i]] - A[a[i]] == c[i]) {
      score += d[i];
    }
  }
  return score;
}
int dfs(vector<int> &A) {
  if (A.size() == n) {
    return calcScore(A);
  }
  int maxScore = 0;
  rep1(i, m) {
    if (A.size() != 0 && i < A[A.size() - 1]) {
      continue;
    }
    A.push_back(i);
    maxScore = max(maxScore, dfs(A));
    A.pop_back();
  }

  return maxScore;
}

int main() {
  cin >> n >> m >> q;
  a.resize(q);
  b.resize(q);
  c.resize(q);
  d.resize(q);
  rep(i, q) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--;
    b[i]--;
  }
  vector<int> A;
  cout << dfs(A) << endl;

  return 0;
}
