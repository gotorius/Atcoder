#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    vector<vector<bool>> g(h, vector<bool>(w, true));
    auto dfs = [&](auto dfs, int x, int y){
        if(x < 0 || x >= h || y < 0 || y >= w) return;
        if(!g[x][y]) return;
        if(s[x][y] == '.') return;
        g[x][y] = false;
        dfs(dfs, x+1, y);
        dfs(dfs, x-1, y);
        dfs(dfs, x, y+1);
        dfs(dfs, x, y-1);
        dfs(dfs, x+1, y+1);
        dfs(dfs, x+1, y-1);
        dfs(dfs, x-1, y-1);
        dfs(dfs, x-1, y+1);
    };

    int ans = 0;
    rep(i, h) rep(j, w){
        if(s[i][j] == '.') continue;
        if(g[i][j]){
            ans++;
            dfs(dfs, i, j);
        }
    }
    cout << ans << endl;
    return 0;

}