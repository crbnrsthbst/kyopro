#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() { 
  int ans = 0;
  rep1(i, 12){
    string s;
    cin >> s;
  if(s.length() == i) ans++;
  }
  cout << ans << endl;
  return 0; }