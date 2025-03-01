#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<ll> a(n);
    map<ll,vector<ll>> mp;
    rep(i,n){
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    ll ans = 1e9;
    for(auto p : mp){
        if(p.second.size() == 1) continue;
        rep(i,p.second.size()-1){
            ans = min(ans, p.second[i+1]-p.second[i]+1);
        }
    }
    if(ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
