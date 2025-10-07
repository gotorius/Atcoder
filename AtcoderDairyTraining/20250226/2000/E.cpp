#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n;
    cin >> n;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];

    ll t = 0;
    rep(i,n){
        if(h[i]%5 == 0){
            t += 3*(h[i]/5);
        }else{
            ll a = h[i]%5;
            t += 3*(h[i]/5);
            while(a > 0){
                t++;
                if(t%3 == 0) a -= 3;
                else a--;
            }
        }
    }
    cout << t << endl;
    return 0;
}