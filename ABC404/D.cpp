#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, m;
    cin >> n >> m;
    vector<ll> c(n);
    rep(i,n) cin >> c[i];
    vector<vector<ll>> zoo(n);
    rep(i,m){
        int k;
        cin >> k;
        rep(j,k){
            int a;
            cin >> a;
            a--;
            zoo[a].push_back(i);
        }
    }
    ll ans = LLONG_MAX;

    rep(i,1<<n){
        vector<ll> ani(m,0);
        bool ok = true;
        ll cnt = 0;
        rep(j,n){
            if(i & (1<<j)){
                cnt += c[j];
                for(auto p : zoo[j]){
                    ani[p]++;
                }
            }
        }
        rep(i,m) if(ani[i] < 2) ok = false;
        if(ok) ans = min(ans, cnt);
        ok = true;
        rep(i,m) if(ani[i] < 1) ok = false;
        if(ok) ans = min(ans, (ll)2*cnt);
    }
    if(ans == LLONG_MAX) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}