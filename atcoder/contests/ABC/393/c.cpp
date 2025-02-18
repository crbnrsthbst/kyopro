#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

vector<int> findRightInterval(vector<vector<int>> &intervals) {
  for (int i = 0; i < intervals.size(); i++) {
    intervals[i].push_back(i);
  }
  sort(intervals.begin(), intervals.end(),
       [](const vector<int> &i1, const vector<int> &i2) {
         return i1[0] < i2[0];
       });
  vector<int> ans(intervals.size());
  for (int i = 0; i < intervals.size(); i++) {
    int start = intervals[i][0];
    int end = intervals[i][1];

    int left = -1;
    int right = intervals.size();
    while (right - left > 1) {
      int mid = (right + left) / 2;
      if (intervals[mid][0] >= end) {
        right = mid;
      } else {
        left = mid;
      }
    }
    if (right < intervals.size() && right != i) {
      ans[intervals[i][2]]= intervals[right][2];
    } else {
      ans[intervals[i][2]] = -1;
    }
  }
  return ans;
}

int main() {
  vector<vector<int>> input;
  vector<int> i1 = {3, 4};
  vector<int> i2 = {2, 3};
  vector<int> i3 = {1, 2};
  input.push_back(i1);
  input.push_back(i2);
  input.push_back(i3);
  findRightInterval(input);
  return 0;
}
