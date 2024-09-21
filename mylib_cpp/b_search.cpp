#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;

// 二分探索
// ns：昇順ソートされたvector
// size:nsの要素数
// needle:検索する数値
int bSearch(auto& haystack, int size, int needle) {
  int left = 0;
  int right = size - 1;
  while (right >= left) {
    int mid = (right + left) / 2;
    if (haystack[mid] == needle)
      return mid;
    else if (haystack[mid] > needle)
      right = mid - 1;
    else
      left = mid + 1;
  }
  return -1;
}

/*
valuesの要素でmin以上を満たす最小のもののインデックスを返却する。
min以上を満たす要素がない場合 -1を返却
*/
bool isOk1(int value, int min) {
  if (value >= min) return true;
  return false;
}
int lowerBound(auto& haystack, int size, int min) {
  int ok = size;
  int ng = -1;
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (isOk1(haystack[mid], min))
      ok = mid;
    else
      ng = mid;
  }
  if (ok == size) return -1;
  return ok;
}

bool isOk2(int value, int max) {
  if (value <= max) return true;
  return false;
}
/*
haystacksの要素でmax以下を満たす最大のもののインデックスを返却する。
max以上を満たす要素がない場合 -1を返却する
*/
int upperBound(auto haystack, int size, int max) {
  int ok = -1;
  int ng = size;
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if (isOk2(haystack[mid], max))
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}