#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    ll n, W;
    cin >> n >> W;
    vector<ll> w(n), v(n);
    rep(i,n) cin >> w[i] >> v[i];

    vector<vector<ll>> dp(n+1, vector<ll>(W+1, 0));
    rep(i,n){
        rep(j,W+1){
            if(j >= w[i]){
                dp[i+1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            }else{
                dp[i+1][j] = dp[i][j];
            }
        }
    }

    // 出力（必要に応じて）
    cout << dp[n][W] << endl;  // 最大価値を出力

    return 0;
}
