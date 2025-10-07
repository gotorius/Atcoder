#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n);
    vector<bool> b(n, false);

    rep(i,m){
        int u, v;
        cin >> u >> v;
        u--,v--;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    auto dfs = [&](auto dfs, int x){
        if(b[x]) return;
        b[x] = true;
        for(auto p : a[x]){
            dfs(dfs, p);
        }
        return;
    };

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(b[i] == false){
            ans++;
            dfs(dfs, i);
        }
    }

    cout << ans << endl;
    return 0;
}