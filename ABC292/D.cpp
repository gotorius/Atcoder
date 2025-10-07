#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

//ACL
#include <atcoder/all>
using namespace atcoder;
using P = pair<int,int>;



int main(void){
    int n, m;
    cin >> n >> m;
    map<P, int> mp;
    vector<set<int>> to(n);

    dsu uf(n);
    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--; b--;
        uf.merge(a,b);
        to[a].insert(b);
        to[b].insert(a);
        mp[P(a,b)]++;
        mp[P(b,a)]++;

    }

    vector<bool> v(n, false);
    auto dfs = [&](auto dfs, int x, int ans) -> int{
        v[x] = true;
        for(auto p : to[x]){
            ans += mp[P(x,p)];
            if(!v[p]) dfs(dfs, p, ans);
        }
        return ans;
    };

    rep(i,n){
        if(i == uf.leader(i)){
            if(dfs(dfs, i, 0) != uf.size(i)){
                cout << dfs(dfs, i, 0) << ' ' << uf.size(i) << endl;
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}