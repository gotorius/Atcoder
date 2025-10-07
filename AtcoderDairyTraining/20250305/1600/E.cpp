#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 0;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '.'){
                int nowi = i, nowj = j;
                bool ok = true;
                rep(x,n){
                    if(t[x] == 'U'){
                        nowi--;
                    }else if(t[x] == 'D'){
                        nowi++;
                    }else if(t[x] == 'L'){
                        nowj--;
                    }else if(t[x] == 'R'){
                        nowj++;
                    }
                    if(s[nowi][nowj] == '#'){
                        ok = false;
                        break;
                    }
                }
                if(ok) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}