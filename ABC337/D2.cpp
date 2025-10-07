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

    rep(i,h){
        rep(j,w){
            if(s[i][j] == 'x') continue;
            int cnt = 0;
            bool ok = true;
            rep(u,k){
                if(i-u < 0){
                    ok = false; break;
                }
                if(s[i-u][j] == 'x'){
                    ok = false; break;
                }
                if(s[i-u][j] == '.') cnt++;
            }
            if(ok) ans = min(ans, cnt);
            cnt = 0, ok = true;

            rep(d,k){
                if(i+d >= h){
                    ok = false; break;
                }
                if(s[i+d][j] == 'x'){
                    ok = false; break;
                }
                if(s[i+d][j] == '.') cnt++;
            }
            if(ok) ans = min(ans, cnt);
            cnt = 0, ok = true;

            rep(l,k){
                if(j-l < 0){
                    ok = false; break;
                }
                if(s[i][j-l] == 'x'){
                    ok = false; break;
                }
                if(s[i][j-l] == '.') cnt++;
            }
            if(ok) ans = min(ans, cnt);
            cnt = 0, ok = true;

            rep(r,k){
                if(j+r >= w){
                    ok = false; break;
                }
                if(s[i][j+r] == 'x'){
                    ok = false; break;
                }
                if(s[i][j+r] == '.') cnt++;
            }
            if(ok) ans = min(ans, cnt);
        }
    }
    if(ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;
    return 0;

}