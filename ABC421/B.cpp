#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

ll f(ll n) {
    ll rev = 0;
    while (n > 0) {
        ll digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main(void){
    int x, y;
    cin >> x >> y;
    vector<ll> sum(100);
    sum[0] = x;
    sum[1] = y;

    rep(i,10){
        sum[i+2] = sum[i+1] + sum[i];
        sum[i+2] = f(sum[i+2]);
    }
    cout << sum[9] << endl;
    return 0;
}