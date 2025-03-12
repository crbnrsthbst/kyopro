#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define all(a) a.begin(), a.end()
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<double> A(n), B(n);
  rep(i, n) { cin >> A[i] >> B[i]; }
  vector<double> timeToBurn(n);
  double totalTimeToBurn = 0;
  rep(i, n) {
    timeToBurn[i] = A[i] / B[i];
    totalTimeToBurn += timeToBurn[i];
  }
  double timeToMeet = totalTimeToBurn / 2;
  double time = 0;
  double burned = 0;
  rep(i, n) {
    if (timeToBurn[i] <= timeToMeet - time) {
      time += timeToBurn[i];
      burned += A[i];
    } else {
      burned += A[i] * ((timeToMeet - time) / timeToBurn[i]);
      break;
    }
  }
  cout << burned << setprecision(5) << endl;
  return 0;
}