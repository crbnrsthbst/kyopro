#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;

vector<int> split(string str, char del) {
  int first = 0;
  int last = str.find_first_of(del);
  vector<int> result;

  while (first < str.size()) {
    result.push_back(stoi(str.substr(first, last - first)));
    first = last + 1;
    last = str.find_first_of(del, first);
    if (last == string::npos) last = str.size();
  }
  return result;
}

vector<string> splitString(string str, char del) {
  int first = 0;
  int last = str.find_first_of(del);
  vector<string> result;

  while (first < str.size()) {
    result.push_back(str.substr(first, last - first));
    first = last + 1;
    last = str.find_first_of(del, first);
    if (last == string::npos) last = str.size();
  }
  return result;
}