#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n, vector<int>());
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    g[u - 1].push_back(v);
    g[v - 1].push_back(u);
  }
  map<int, set<int>> deletedEdges;
  map<int, set<int>> foundEdges;
  int deleteCnt = 0;
  rep(i, n) {
    for (int n2 : g[i]) {
      int n1 = i + 1;
      bool n1ExistsInDeletedMap = deletedEdges.count(n1) != 0;
      bool n2ExistsInDeletedMap = deletedEdges.count(n2) != 0;
      bool alreadyDeleted =
          (n1ExistsInDeletedMap && deletedEdges.at(n1).count(n2) != 0) ||
          (n2ExistsInDeletedMap && deletedEdges.at(n2).count(n1) != 0);
      if (alreadyDeleted) {
        continue;
      }

      bool n1ExistsInFoundMap = foundEdges.count(n1) != 0;
      bool n2ExistsInFoundMap = foundEdges.count(n2) != 0;
      bool alreadyFound =
          (n1ExistsInFoundMap && foundEdges.at(n1).count(n2) != 0) ||
          (n2ExistsInFoundMap && foundEdges.at(n2).count(n1) != 0);
      if (n1 == n2) {
        deleteCnt++;
        if (!n1ExistsInDeletedMap) {
          set<int> e;
          e.insert(n1);
          deletedEdges[n1] = e;
        } else {
          deletedEdges[n1].insert(n1);
        }
      } else if (alreadyFound) {
        deleteCnt++;
        if (!n1ExistsInDeletedMap) {
          set<int> e;
          e.insert(n2);
          deletedEdges[n1] = e;
        } else {
          deletedEdges[n1].insert(n2);
        }
      }
      if (!n1ExistsInFoundMap) {
        set<int> e;
        e.insert(n2);
        foundEdges[n1] = e;
      } else {
        foundEdges[n1].insert(n2);
        foundEdges[n2].insert(n1);
      }
    }
  }

  cout << deleteCnt << endl;
  return 0;
}