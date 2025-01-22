#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    rep(i,n) cin >> a[i];   
    rep(i,m) cin >> b[i]; 

    sort(a.begin(), a.end());
    ll ans = 0;
    rep(i,m){
        auto p = lower_bound(a.begin(), a.end(), b[i]);
        int index = p - a.begin();
        if(*p >= b[i] && *p != -1){
            ans += *p;
            a[index] = -1;
        }else{
            ans = -1;
            break;
        }
    } 
    cout << ans << endl;
    return 0;
}