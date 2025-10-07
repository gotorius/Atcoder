#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    int si, sj, gi, gj;
    rep(i,h){
        cin >> s[i];
    }

    int x = 0;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == 'S'){
                si = i;
                sj = j;
            }
            if(s[i][j] == 'G'){
                gi = i;
                gj = j;
            }
            if(s[i][j] == '.'){
                x++;
        }
    }

    int ans = 1e8;
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    auto dfs = [&](auto dfs, int i, int j, int cnt, int m) -> void {

        if(cnt > h*w) return;
        if(i < 0 || i >= h || j < 0 || j >= w) return;
        if(s[i][j] == '#' || visited[i][j]) return;
        if(s[i][j] == 'G'){
            ans = min(ans, cnt);
            return;
        }
        visited[i][j] = true;
        if(m == 0){
            dfs(dfs, i+1, j, cnt+1, 1);
            dfs(dfs, i-1, j, cnt+1, 1);
        }else{
            dfs(dfs, i, j+1, cnt+1, 0);
            dfs(dfs, i, j-1, cnt+1, 0);
        }
        visited[i][j] = false;
    };

    dfs(dfs, si, sj, 0, 0);
    dfs(dfs, si, sj, 0, 1);

    if(ans != 1e8){
        cout << ans << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
   
    }
}
