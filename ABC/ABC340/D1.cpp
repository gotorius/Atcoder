#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

struct Edge {
  int to, cost;
  Edge() {}
  Edge(int to, int cost): to(to), cost(cost) {}
};

int main() {
  int n;
  cin >> n;
  vector<vector<Edge>> g(n);
  rep(i,n-1) {
    int a, b, x;
    cin >> a >> b >> x;
    x--;
    g[i].emplace_back(i+1,a);
    g[i].emplace_back(x,b);
  }

  const ll INF = 1e18;
  vector<ll> dist(n, INF);
  using P = pair<ll,int>;
  priority_queue<P,vector<P>,greater<P>> q;
  dist[0] = 0;
  q.emplace(0,0);

  while (!q.empty()) {
    auto [d,v] = q.top(); q.pop();
    if (dist[v] != d) continue;
    for (auto e : g[v]) {
      ll nd = d+e.cost;
      if (nd >= dist[e.to]) continue;
      dist[e.to] = nd;
      q.emplace(nd, e.to);
    }
  }

  cout << dist[n-1] << endl;
  return 0;
}