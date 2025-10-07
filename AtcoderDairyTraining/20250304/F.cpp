#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<ll,ll>;

int main(void){
    ll n;
    ll x, y;
    cin >> n >> x >> y;
    vector<ll> a(n), b(n);
    vector<P> ab(n), ba(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) ab[i] = P(a[i], b[i]), ba[i] = P(b[i], a[i]);
    sort(ab.rbegin(), ab.rend());
    sort(ba.rbegin(), ba.rend());

    ll ans1 = 0, ans2 = 0, cnt1, cnt2;
    rep(i,n){
        ans1 += ab[i].first;
        if(ans1 > x){
            cnt1 = i+1;
            break;
        }
        if(i == n-1){
            cnt1 = n;
        }
    }
    rep(i,n){
        ans2 += ba[i].first;
        if(ans2 > y){
            cnt2 = i+1;
            break;
        }
        if(i == n-1){
            cnt1 = n;
        }
    }
    cout << min(cnt1, cnt2)<< endl;
    return 0;

}
