#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//ACL
#include <atcoder/all>
using namespace atcoder;

int main(void){
    int n, m;
    cin >> n >> m;
    dsu uf(n);
    int ans = 0;
    rep(i,m){
        int u, v;
        cin >> u >> v;
        u--; v--;
        if(uf.same(u, v)) ans++;
        else uf.merge(u, v);
    }
    cout << ans << endl;
    return 0;
}