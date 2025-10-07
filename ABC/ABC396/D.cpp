#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

struct Edge{
    int to;
    ll cost;
};

int main(void){
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

    auto dfs = [&](auto dfs, vector<ll> path, vector<vector<ll>> all_paths, int v){
        for(auto e : g[v]){
            if(e.to == n-1){
                path.push_back(e.cost);
                all_paths.push_back(path);
                return;
            };
            path.push_back(e.cost);
            dfs(dfs, path, all_paths, e.to);
        }
    };

    vector<ll> path;
    vector<vector<ll>> all_paths;
    dfs(dfs, path, all_paths, 0);
    for(auto p : all_paths){
        for(auto e : p){
            cout << e << " ";
        }
        cout << endl;
    }
    return 0;

}