#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n), t(m);
    rep(i,n) cin >> s[i];
    rep(i,m) cin >> t[i];

    rep(i,n-m+1){
        rep(j,n-m+1){
            int cnt = 0;
            rep(x,m){
                rep(y,m){
                    if(s[i+x][j+y] == t[x][y]) cnt++;
                }
            }
            if(cnt == m*m){
                cout << i+1 << ' ' << j+1 << endl;
                return 0;
            }
        }
    }
    return 0;
   
}