#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() { 
    string s1,s2;
    cin >> s1 >> s2;
    if (s1 == "sick" && s2 == "sick") {
        cout << 1 << endl;
    } else if (s1 == "sick" && s2 != "sick") {
        cout << 2 << endl;
    } else if (s2 == "sick" && s1 != "sick") {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }

    return 0; }