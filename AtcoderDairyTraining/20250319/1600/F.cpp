#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    map<ll,vector<ll>> mp;
    rep(i,n){
        int a, b;
        cin >> a >> b;
        a--; b--;
        mp[a].push_back(b);
    }

    ll ans = 0;
    auto dfs = [&](auto dfs, ll x, ll m){
        if(mp[x].size() == 0){
            ans = max(ans, m);
            return;
        }

        for(auto to : mp[x]){
            if(to > m) dfs(dfs, to, to);
            else continue;
        }
    };

    dfs(dfs, 0, 0);
    cout << ans+1 << endl;
    return 0;
}