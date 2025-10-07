#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    rep(i,h) cin >> s[i];
    rep(i,h) cin >> t[i];

    rep(i,h){
        int sh = 0;
        int th = 0;
        rep(j,w){
            if(s[i][j] == '#') sh++;
            if(t[i][j] == '#') th++;
        }
        if(sh != th){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}