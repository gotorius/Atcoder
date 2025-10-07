#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main(void){
    int t;
    cin >> t;
    rep(i,t){
        ll a, b, c;
        cin >> a >> b >> c;
        ll mi = min(a,c);
        ll ma = max(a,c);
        ll ans;
        if((ma-mi)+b >= mi) ans = mi;
        else ans = ma-mi+b;
        cout << ans << endl;
    }
    return 0;
}