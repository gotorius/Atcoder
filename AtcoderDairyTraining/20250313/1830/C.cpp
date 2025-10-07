#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n);
    rep(i,m){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].insert(v);
        g[v].insert(u);
    }
    int ans = 0;
    for(int a = 0; a < n; a++){
        for(int b = a+1; b < n; b++){
            for(int c = b+1; c < n; c++){
                if(g[a].count(b) && g[b].count(c) && g[c].count(a)){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}