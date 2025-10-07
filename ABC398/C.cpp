#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    map<ll,ll> mpa;
    map<ll,ll> mpn;
    rep(i,n){
        mpa[a[i]]++;
        mpn[a[i]] = i+1;
    }
    ll ans = 0;

    rep(i,n){
        if(mpa[a[i]] == 1){
            ans = max(ans, a[i]);
        }
    }
    cout << mpn[ans] << endl;
    return 0;
}