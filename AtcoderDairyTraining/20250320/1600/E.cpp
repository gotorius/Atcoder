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
    ll num = 0;
    ll mnum = 0;
    rep(i,n){
        num += a[i];
        mnum = min(mnum, num);
    }
    mnum = abs(mnum);
    rep(i,n){
        mnum += a[i];
    }
    cout << mnum << endl;
    return 0;
}