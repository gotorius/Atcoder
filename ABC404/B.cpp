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
    vector<vector<int>> g(n);
    dsu uf(n);

    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--, b--;
        uf.merge(a,b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bool ok = true;
    rep(i,n){
        if(g[i].size() != 2) ok = false;
    }
    if(uf.size(0) != n) ok = false;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}