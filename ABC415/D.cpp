#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, m;
    cin >> n >> m;
    vector<ll> d(m);
    vector<ll> a(m), b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
        d[i] = a[i] - b[i];
    }
    sort(d.begin(), d.end());
    ll ans = 0;
    rep(i,m){
        if(n < a[i])
        ans += max(0LL, ((n-a[i])/d[i])+1);
        n = a[i];
    }
    cout << ans << endl;
    return 0;
}