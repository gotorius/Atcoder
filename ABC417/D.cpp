#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    map<int,int> mp;
    rep(i,n){
        b[i] = i + a[i];
        mp[b[i]]++;
        c[i] = i - a[i];
    }
    int ans = 0;
    rep(i,n){
        if(mp.find(c[i]) != mp.end()) ans += mp[c[i]];
    }
    cout << ans/2 << endl;

    rep(i,n) cout << b[i] << ' ' << c[i];
    cout << endl;
    return 0;
}