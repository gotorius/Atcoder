#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> g;
    vector<ll> k;
    rep(i,n){
        cin >> a[i]; 
        if(a[i] % 2 == 0) g.push_back(a[i]);
        else k.push_back(a[i]);
    }
    ll gs = g.size();
    ll ks = k.size();

    sort(g.begin(), g.end());
    sort(k.begin(), k.end());

    if(ks == 1 && gs == 1){
        cout << -1 << endl;
        return 0;
    }else{
        ll gans = 0;
        ll kans = 0;
        if(gs > 1) gans = g[gs-1]+g[gs-2];
        if(ks > 1) kans = k[ks-1]+k[ks-2];
        ll ans = max(gans, kans);
        cout << ans << endl;
        return 0;
    }
}