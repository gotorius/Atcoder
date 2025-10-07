#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
const ll MOD = 1000000000;

int main(void){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    if(n < k){
        cout << 1 << endl;
        return 0;
    }else{
        rep(i,k) a[i] = 1;
        a[k] = k;
        ll sum = k;
        for(int i = k+1; i <= n; i++){
            sum = (sum + a[i-1] - a[i-k-1] + MOD) % MOD;
            a[i] = sum;
            sum %= MOD;
        }
        ll ans = a[n] % MOD;
        cout << ans << endl;
        return 0;
    }
}