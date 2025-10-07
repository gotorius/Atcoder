#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int u = 1001, d = -1, l = 1001, r = -1;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#'){
                if(i < u) u = i;
                if(i > d) d = i;
                if(j < l) l = j;
                if(j > r) r = j;
            }
        }
    }

    bool ok = true;
    for(int i = u; i <= d; i++){
        for(int j = l; j <= r; j++){
            if(s[i][j] == '?' || s[i][j] == '#') continue;
            else{
                ok = false;
                break;
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}