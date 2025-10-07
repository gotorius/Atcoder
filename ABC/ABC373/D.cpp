#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

struct Edge{
    int to, w;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> g(n);
    rep(i,m){
        int u,v,w;
        cin >> u >> v >> w;
        u--; v--;
        g[u].emplace_back(v,w);
        g[v].emplace_back(u,-w);
    }

    vector<bool> used(n);
    vector<ll> x(n);
    rep(sv,n){
        if(used[sv]) continue;

        auto dfs = [&](auto dfs, int v, ll val){
            if(used[v]) return;
            used[v] = true;
            x[v] = val;
            for(Edge e : g[v]){
                dfs(dfs, e.to, val+e.w);
            }
        };
        
        dfs(dfs, sv, 0);
    }
    rep(i,n) cout << x[i] << ' ';
    cout << endl;
    return 0;   
}
