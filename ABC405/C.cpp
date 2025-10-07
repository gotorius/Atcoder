#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<ll> sum(n);
    ll s = 0;
    rep(i,n){
        cin >> a[i];
        s += a[i];
    }
    rep(i,n){
        s -= a[i];
        sum[i] = s;
    }
    
    ll ans = 0;
    rep(i,n){
        ans += a[i]*sum[i];
    }
    cout << ans << endl;
    return 0;

}