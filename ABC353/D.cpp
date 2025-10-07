#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

ll f(ll x, ll y){
    string s = to_string(x)+to_string(y);
    ll z = stoll(s);
    return z;
}

int main(void){
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    mint ans = 0;
    rep(i,n-1){
        for(int j=i+1; j<n; j++){
            ans += f(a[i], a[j]);
        }
    }

    cout << ans.val() << endl;
    return 0;
}



