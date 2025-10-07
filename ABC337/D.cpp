#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 1e9;
    auto dfs = [&](auto dfs, int x, int y, int cnt, int sum, int dis){
        if(x >= h || y >= w || x < 0 || y < 0) return;
        if(s[x][y] == 'x') return;
        if(cnt == k){
            if(s[x][y] == '.') ans = min(ans, sum+1);
            else ans = min(ans, sum);
            return;
        }

        if(s[x][y] == '.' && dis == 0) dfs(dfs, x+1, y, cnt+1, sum+1, 0);
        if(s[x][y] == '.' && dis == 1) dfs(dfs, x-1, y, cnt+1, sum+1, 1);
        if(s[x][y] == '.' && dis == 2) dfs(dfs, x, y+1, cnt+1, sum+1, 2);
        if(s[x][y] == '.' && dis == 3) dfs(dfs, x, y-1, cnt+1, sum+1, 3);

        if(s[x][y] == 'o' && dis == 0) dfs(dfs, x, y-1, cnt+1, sum, 0);
        if(s[x][y] == 'o' && dis == 1) dfs(dfs, x, y-1, cnt+1, sum, 1);
        if(s[x][y] == 'o' && dis == 2) dfs(dfs, x, y-1, cnt+1, sum, 2);
        if(s[x][y] == 'o' && dis == 3) dfs(dfs, x, y-1, cnt+1, sum, 3);

        
    };

    rep(i,h){
        rep(j,w){
            if(s[i][j] == 'x') continue;
            if(s[i][j] == 'o'){
                rep(d,4) dfs(dfs, i, j, 1, 0, d);
                cout << ans << ' ' << i << ' ' << j << endl;
            }else{
                rep(d,4) dfs(dfs, i, j, 1, 1, d);
                cout << ans << ' ' << i << ' ' << j << endl;
            }
        }
    }
    cout << ans << endl;
    return 0;

}