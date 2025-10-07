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
    vector<ll> c;
    
    rep(i,n){
        cin >> a[i];
        c.push_back(a[i]);
    }
    rep(i,m){
        cin >> b[i];
        c.push_back(b[i]);
    }

    sort(c.begin(), c.end());
    map<ll,int> ma;
    rep(i,c.size()){
        ma[c[i]] = i+1;
    }

    rep(i,n) cout << ma[a[i]] << ' ';
    cout << endl;
    rep(i,m) cout << ma[b[i]] << ' ';
    cout << endl;
    return 0;
}