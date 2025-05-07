#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i,n) cin >> a[i] >> b[i] >> c[i];
    int dp[100003][3];
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    rep(i,n){
        dp[i+1][0] = max(dp[i][1], dp[i][2]) + a[i];
        dp[i+1][1] = max(dp[i][0], dp[i][2]) + b[i];
        dp[i+1][2] = max(dp[i][0], dp[i][1]) + c[i];
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
    return 0;
}