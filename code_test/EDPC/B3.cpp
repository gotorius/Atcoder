#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    vector<ll> dp(n,1001001001);

    dp[0] = 0;
    rep(i,n-1){
        dp[i+1] = min(dp[i+1], dp[i] + abs(h[i+1] - h[i]));
        if(i+2 < n) dp[i+2] = min(dp[i+2], dp[i] + abs(h[i+2] - h[i]));
    }
    cout << dp[n-1] << endl;
    return 0;
}