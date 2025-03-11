#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    cin >> n >> q;
    vector<ll> r(n);
    rep(i,n) cin >> r[i];

    vector<ll> s(n);
    map<ll,ll> mp;
    
    sort(r.begin(), r.end());
    s[0] = r[0];
    mp[s[0]] = 1;
    rep(i,n-1){
        s[i+1] = s[i] + r[i+1];
        mp[s[i+1]] = i+2;
    }


    ll ans = 0;
    rep(i,q){
        ll x;
        cin >> x;
        auto p = upper_bound(s.begin(), s.end(), x);
        if(p == s.begin()){
            ans = 0;
        }else if(p == s.end()){
            ans = mp[s[n-1]];
        }else{
            ans = mp[*p]-1;
        }
        cout << ans << endl;
    }

    return 0;


}