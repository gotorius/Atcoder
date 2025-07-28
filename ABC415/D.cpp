#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, m;
    cin >> n >> m;
    vector<ll> d(m);
    rep(i,m){
        ll a, b;
        cin >> a >> b;
        d[i] = a - b;
    }
    sort(d.begin(), d.end());
    ll ans = 0;
    rep(i,m){
        ans += n;
    }
}