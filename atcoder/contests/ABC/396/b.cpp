#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int q;
  cin >> q;

  stack<int> cards;
  rep(i, 100) { cards.push(0); }

  rep(i, q) { 
    int type;
    cin >> type;
    if (type == 1) {
      int x;
      cin >> x;
      cards.push(x);
    } else {
      cout << cards.top() << endl;
      cards.pop();
    }
  }

  return 0;
}