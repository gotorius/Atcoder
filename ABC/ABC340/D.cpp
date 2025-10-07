#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


//dpで解こうとしたけど全然違ったやつ
int main(void){
    int n;
    cin >> n;
    vector<ll> a(n), b(n), x(n);
    vector<ll> dp(n,1e10);
    rep(i,n-1){
        cin >> a[i] >> b[i] >> x[i];
        x[i]--;
    }
    dp[0] = 0;
    rep(i,n-1){
        dp[i+1] = min(dp[i+1], dp[i] + a[i]);
        dp[x[i]] = min(dp[x[i]], dp[i] + b[i]);
    }
    cout << dp[n-1] << endl;
    return 0;
}