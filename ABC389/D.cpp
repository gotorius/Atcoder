#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


ll dis(ll x, ll y){
    ll ans = sqrt(x*x + y*y);
    return ans;
}

int main() {
    ll r;
    cin >> r;

    ll ans = 0;
    rep(i,r){
        rep(j,r){
            bool ok = true;
            if(dis(i+0.5,j+0.5) > r) ok = false;
            if(dis(i-0.5,j+0.5) > r) ok = false;
            if(dis(i+0.5,j-0.5) > r) ok = false;
            if(dis(i-0.5,j-0.5) > r) ok = false;
            if(ok){
                ans++;
                cout << i << j << endl;
            }
        }
    }
    cout << ans << endl;
    return 0;
   
}