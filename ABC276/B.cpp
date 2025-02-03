#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> st(n);
    rep(i,m){
        int a, b;
        cin >> a >> b;
        a--,b--;
        st[a].insert(b);
        st[b].insert(a);
    }

    rep(i,n){
        cout << st[i].size() << ' ';
        for(auto p : st[i]) cout << p+1 << ' ';
        cout << endl;
    }
    return 0;
}