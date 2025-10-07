#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, string>;

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    vector<ll> as(n);
    vector<ll> bs(n);
    int wa = 0;
    as[0] = 0;
    rep(i,n){
        cin >> a[i];
        as[i+1] = wa + a[i];
        wa += a[i];
    }

    int wb = 0;
    rep(i,n){
        bs[i+1] = wb + a[n-i-1];
        wb += a[n-i-1];
    }

    s %= wa;

    int sum = 0;
    rep(i,n){
        sum = bs[i];
        auto it = lower_bound(as.begin(),as.end(), s-sum);
        if(*it + sum == s){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;

}


