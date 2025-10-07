#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    int ans = 0;
    rep(i,n){
        for(int j = i+1; j < n; j++){
            bool ok = true;
            rep(k,m){
                if(s[i][k] == 'x' && s[j][k] == 'x'){
                    ok = false;
                    break;
                }
            }
            if(ok) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}