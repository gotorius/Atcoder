#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    ll now = 1;
    rep(i,m+1){
        ans += now;
        now *= n;
        if(ans > 1e9){
            cout << "inf" << endl;
            return 0;
        }
    }
    if(ans <= 1e9) cout << ans << endl;
    else cout << "inf" << endl;
    return 0;
}