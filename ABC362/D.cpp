#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<ll,int>;

struct Edge {
  int to, cost;
  Edge(int to, int cost): to(to), cost(cost) {}
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<vector<Edge>> g(n);
  rep(i,m) {
    int u,v,b;
    cin >> u >> v >> b;
    u--; v--;
    g[u].emplace_back(v, b+a[v]);
    g[v].emplace_back(u, b+a[u]);
  }

  const ll INF = 1e18;
  vector<ll> dist(n, INF);
  priority_queue<P, vector<P>, greater<P>> q;
  dist[0] = a[0]; q.emplace(a[0],0);

  while (!q.empty()) {
    auto [d,v] = q.top(); q.pop();
    if (dist[v] != d) continue;
    for (Edge e : g[v]) {
      ll nd = d+e.cost;
      if (dist[e.to] <= nd) continue;
      dist[e.to] = nd; q.emplace(nd,e.to);
    }
  }

  for (int i = 1; i < n; i++) cout << dist[i] << ' ';
  cout << endl;
  return 0;
}