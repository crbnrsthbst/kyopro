#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
    
    double x;
    cin >> x;

    if (x >= 38) {
        cout << 1 << endl;
    } else if (x < 38 && x >= 37.5) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
    return 0; }