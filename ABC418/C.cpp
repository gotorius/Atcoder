#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<ll> s(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    s[0] = a[0];
    rep(i,n-1) s[i+1] = s[i] + a[i+1];
    rep(i,q){
        ll ans = 0;
        ll b;
        cin >> b;
        if(b > 1000000) b = 1000000;
        if(b > a[n-1]) cout << -1 << endl;
        else{
            auto p = lower_bound(a.begin(), a.end(), b);
            int idx = p - a.begin();
            if(idx != 0) ans += s[idx-1];
            ans += (n-idx)*(b-1) + 1;
            cout << ans << endl;
        }
    }
}