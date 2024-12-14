#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  int chunkCnt = 0;
  bool inChunk = false;
  int kM1TailIndex = 0;
  int kHeadIndex = 0;
  int kTailIndex = 0;
  rep(i, n) {
    if (s[i] == '1') {
      if (inChunk) {
        if (i == n - 1) {
          if (chunkCnt == k) {
            kTailIndex = i;
          }
        }
      } else {
        inChunk = true;
        chunkCnt++;
        if (chunkCnt == k) {
          kHeadIndex = i;
          if (i == n - 1) {
            kTailIndex = i;
          }
        }
      }
    } else {
      if (inChunk) {
        inChunk = false;
        if (chunkCnt == k - 1) {
          kM1TailIndex = i - 1;
        } else if (chunkCnt == k) {
          kTailIndex = i - 1;
        }
      } 
    }
  }

  rep(i, n) {
    if (i == kM1TailIndex + 1) {
      for (int j = kHeadIndex; j <= kTailIndex; j++) {
        cout << s[j];
      }
    }
    if (i >= kHeadIndex && i <= kTailIndex) continue;
    cout << s[i];
  }
  return 0;
}
