#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> to(n+1);

  rep(i,m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    if (b == 0) b = n;
    to[a].push_back(b);
  }

  const int INF = 1001001001;
  vector<int> dist(n+1, INF);
  queue<int> q;
  dist[0] = 0; q.push(0);
  while (!q.empty()) {
    int v = q.front(); q.pop();
    for (int u : to[v]) {
      if (dist[u] != INF) continue;
      dist[u] = dist[v]+1;
      q.push(u);
    }
  }

  int ans = dist[n];
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}