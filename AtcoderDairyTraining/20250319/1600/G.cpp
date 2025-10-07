#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//ACL
#include <atcoder/dsu>
using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> g(n, 0);
    dsu d(n);
    bool ok = true;

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a]++, g[b]++;
        if(!d.same(a, b)) d.merge(a, b);
        else ok = false;
    }

    rep(i,n) if(g[i] > 2) ok = false;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}
