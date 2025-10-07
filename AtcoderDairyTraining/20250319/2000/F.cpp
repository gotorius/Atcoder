#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<ll,ll>;

int main(void){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    vector<P> p(n);
    ll ans = 0;
    rep(i,n){
        cin >> a[i] >> b[i];
        ans += b[i];
        p[i] = {a[i], b[i]};
    }
    sort(p.begin(), p.end());
    if(ans <= k){
        cout << 1 << endl;
        return 0;
    }

    for(auto [x, y] : p){
        ll now = x;
        ans -= y;
        if(ans <= k){
            cout << now+1 << endl;
            return 0;
        }
    }
}