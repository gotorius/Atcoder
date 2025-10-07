#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int l = 1001, r = -1, u = 1001, d = -1;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#'){
                l = min(l,j);
                r = max(r,j);
                u = min(u,i);
                d = max(d,i);
            }
        }
    }

    for(int i = l; i <= r; i++){
        for(int j = u; j <= d; j++){
            if(s[j][i] == '.'){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
   
}