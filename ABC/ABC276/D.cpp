#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector<ll> a2(n,0);
    vector<ll> a3(n,0);
    vector<ll> as(n,0);

    ll ans = 0;
    rep(i,n){
        ll x = a[i];
        if(x%2 == 0){
            while(x%2 == 0) {
                x /= 2;
                a2[i]++;
            }
        }
        if(x%3 == 0){
            while(x%3 == 0) {
                x /= 3;
                a3[i]++;
            }
        }
        as[i] = x;
    }
    rep(i,n-1){
        if(as[i] != as[i+1]){
            cout << -1 << endl;
            return 0;
        }
    }

    sort(a2.begin(), a2.end());
    sort(a3.begin(), a3.end());

    rep(i,n){
        ans += a2[i];
        ans += a3[i];
    }
    ans -= a2[0]*n;
    ans -= a3[0]*n;

    cout << ans << endl;
    return 0;
   
}