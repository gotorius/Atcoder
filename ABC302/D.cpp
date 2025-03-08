#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using mint = modint998244353;

int main() {
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    sort(b.begin(), b.end());

    ll ans = -1;
    rep(i,n){
        auto p = upper_bound(b.begin(), b.end(), a[i]+d);
        if(*p == b[0]) continue;
        else p--;
        if(abs(a[i])-*p <= d) ans = max(ans, a[i]+*p);
    }
    cout << ans << endl;
    return 0;
}