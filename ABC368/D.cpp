#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n,k;
    cin >> n >> k;
    vector<vector<int>> to(n);
    rep(i,n-1){
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    vector<int> vs(k);
    rep(i,k) cin >> vs[i], vs[i]--;
    vector<bool> selected(n);
    rep(i,k) selected[vs[i]] = true;

    vector<int> num(n);
    
    auto dfs = [&](auto dfs, int v, int p=-1) -> void{
        if(selected[v]) num[v]++;
        for(int u : to[v]){
            if(u == p) continue;
            dfs(dfs,u,v);
            num[v] += num[u];
        }
    };

    dfs(dfs,vs[0]);

    int ans = 0;
    rep(i,n) if(num[i] > 0) ans++;
    cout << ans << endl;
    return 0;   
}
