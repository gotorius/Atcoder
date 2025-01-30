#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    ll a, b;
    cin >> a >> b;

    ll ans = 1e18;
    rep(i,1e7){
        ll x = b*i + a/sqrt(i+1);
        ans = min(ans, x);
    }
    cout << ans << endl;
    return 0;

}