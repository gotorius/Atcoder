#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    ll q, now = -1;
    cin >> q;
    map<ll,ll> mp;
    rep(i,q){
        ll num;
        cin >> num;
        if(num == 1){
            ll x;
            cin >> x;
            now = x;
            mp.clear();
        }else if(num == 2){
            ll i, x;
            cin >> i >> x;
            i--;
            mp[i] += x;
        }else if(num == 3){
            ll i;
            cin >> i;
            i--;
            if(now == -1) cout << a[i]+mp[i] << endl;
            else cout << now + mp[i] << endl;
        }
    }
    return 0;
}
