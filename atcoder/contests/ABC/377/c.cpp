#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

bool isValidCell(int i, int j, int n) {
  if (i < 1 || i > n || j < 1 || j > n) return false;
  return true;
}

int main() {
  long long n, m;
  cin >> n >> m;
  set<pair<int, int>> occupied;

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    occupied.insert({a, b});
    if (isValidCell(a + 2, b + 1, n)) {
      occupied.insert({a + 2, b + 1});
    }
    if (isValidCell(a + 1, b + 2, n)) {
      occupied.insert({a + 1, b + 2});
    }
    if (isValidCell(a - 1, b + 2, n)) {
      occupied.insert({a - 1, b + 2});
    }
    if (isValidCell(a - 2, b + 1, n)) {
      occupied.insert({a - 2, b + 1});
    }
    if (isValidCell(a - 2, b - 1, n)) {
      occupied.insert({a - 2, b - 1});
    }
    if (isValidCell(a - 1, b - 2, n)) {
      occupied.insert({a - 1, b - 2});
    }
    if (isValidCell(a + 1, b - 2, n)) {
      occupied.insert({a + 1, b - 2});
    }
    if (isValidCell(a + 2, b - 1, n)) {
      occupied.insert({a + 2, b - 1});
    }
  }
  cout << n * n - occupied.size() << endl;
  return 0;
}
