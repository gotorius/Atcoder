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

    rep(i, n){
        auto it = upper_bound(b.begin(), b.end(), abs(a[i]+d));
        if(it != b.begin()) it--;
        else continue;
        ans = max(ans, a[i] + *it);
    }

    cout << ans << endl;
    return 0;
}
