#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    vector<string> ss(h);
    rep(i,h) cin >> s[i];

    int cnt = 0;
    
    auto dfs = [&](int i, int j, int c, auto dfs){
        if(c == d){
            return cnt;
        }
        if(i+1 < h && s[i+1][j] == '.'){
            cnt++;
            s[i+1][j] = 'x';
            dfs(i+1,j,c+1,dfs);
        }
        if(i-1 >= 0 && s[i-1][j] == '.'){
            cnt++;
            s[i-1][j] = 'x';
            dfs(i-1,j,c+1,dfs);
        }
        if(j+1 < w && s[i][j+1] == '.'){
            cnt++;
            s[i][j+1] = 'x';
            dfs(i,j+1,c+1,dfs);
        }
        if(j-1 >= 0 && s[i+1][j] == '.'){
            cnt++;
            s[i][j-1] = 'x';
            dfs(i,j-1,c+1,dfs);
        }
    };

    int ans = 0;
    rep(i,h)rep(j,w){
        if(s[i][j] == 'H'){
            ans += dfs(i,j,0,dfs);
        }
    }
    cout << ans << endl;
    return 0;
}