#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep2(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

using Graph = vector<vector<char>>;
vector<int> done;
int t = 0;
int h, w, d;
int ans = 0;
const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};

void dfs(Graph &tiles, int y, int x, vector<vector<bool>> &seen, int dist) {
  if (dist > d) return;

  ans++;
  for (int dir = 0; dir < 4; dir++) {
    int nextY = y + dy[dir];
    int nextX = x + dx[dir];
    if (tiles[nextY][nextX] == 'H' || tiles[nextY][nextX] == '#' ||
        nextY >= h || nextY < 0 || nextX >= w || nextX < 0 ||
        seen[nextY][nextX])
      continue;
    if (dist[nextY][nextX] != -1) continue;
    q.push({nextY, nextX});
    dist[nextY][nextX] = dist[y][x] + 1;
  }
}

int main() {
  cin >> h >> w >> d;
  Graph tiles(h, vector<char>());
  bool seen[h][w];
  rep(i, h) {
    rep(j, w) {
      char c;
      cin >> c;
      tiles[i].push_back(c);
      seen[i][j] = false;
    }
  }
  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if (tiles[i][j] != 'H') continue;
    }
  }
}

int main() {
  int n;
  cin >> n;
  Graph g(n + 1, vector<int>());

  rep(i, n) {
    int u, k;
    cin >> u >> k;
    rep(j, k) {
      int v2;
      cin >> v2;
      g[u].push_back(v2);
    }
  }
  visited.assign(n + 1, 0);
  done.assign(n + 1, 0);
  dfs(g, 1);
  rep1(i, n) { cout << i << " " << visited[i] << " " << done[i] << endl; }
  return 0;
}