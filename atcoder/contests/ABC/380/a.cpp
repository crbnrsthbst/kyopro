#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(x) (x).begin(), (x).end()

int main() {
  int n;
  cin >> n;
  string s = to_string(n);

  int cnt1 = 0;
  int cnt2 = 0;
  int cnt3 = 0;
  
  for(auto c : s){
    if (c == '1'){
      cnt1++;
    } else if(c == '2'){
      cnt2++;
    } else if (c == '3'){
      cnt3++;
    }
  }

  if(cnt1 == 1 && cnt2 == 2 && cnt3 == 3){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }


  return 0;
}