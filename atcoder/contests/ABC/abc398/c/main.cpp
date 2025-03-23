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
  int n;
  cin >> n;
  vector<int> A(n);
  map<int, int> numToPerson;
  rep(i, n) {
    cin >> A[i];
    numToPerson[A[i]] = i + 1;
  }
  map<int, int> numCnt;
  rep(i, n) {
    if (numCnt[A[i]]) {
      numCnt[A[i]]++;
    } else {
      numCnt[A[i]] = 1;
    }
  }
  vector<int> uniqueNums;
  for (pair<int, int> kv : numCnt) {
    if (kv.second == 1) {
      uniqueNums.push_back(kv.first);
    }
  }
  sort(all(uniqueNums));

  if (uniqueNums.size()) {
    cout << numToPerson[uniqueNums.back()] << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}