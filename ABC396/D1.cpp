#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

struct Edge{
    int to;
    ll cost;
};

void dfs(int v, int goal, const vector<vector<Edge>>& g, vector<ll>& path, vector<vector<ll>>& all_paths, vector<bool>& visited) {
    if(v == goal){
        all_paths.push_back(path);
        return;
    }
    
    visited[v] = true;
    for(auto e : g[v]){
        if (!visited[e.to]) {
            path.push_back(e.cost);
            dfs(e.to, goal, g, path, all_paths, visited);
            path.pop_back();
        }
    }
    visited[v] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> g(n);
    
    rep(i,m){
        int x, y;
        ll w;
        cin >> x >> y >> w;
        x--; y--;
        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }

    vector<ll> path;
    vector<vector<ll>> all_paths;
    vector<bool> visited(n, false);

    dfs(0, n-1, g, path, all_paths, visited);

    ll ans = 2*1e18;
    for (auto& p : all_paths){
        ll now = 0;
        ll sum;
        for (auto e : p){
            if(now == 0){
                sum = e;
                now = 1;
            }
            else{
                sum = sum ^ e;
            }
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
