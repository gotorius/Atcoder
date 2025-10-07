#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    ll d;
    cin >> d;
    vector<ll> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    sort(b.begin(),b.end());
    ll ans = -1;
    rep(i,n){
        auto it = lower_bound(b.begin(),b.end(),a[i]);
        ll sa1 = abs(a[i]-*it);
        ll sa2 = abs(a[i]-*(it-1));
        if(min(sa1,sa2) <= d){
            ans = max(ans, max(a[i]+*it,a[i]+*(it-1)));
        }
    }
    cout << ans << endl;
    return 0;
}
