#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    int INF = 1001001001;
    vector<int> dp(n+1, INF);

    dp[0] = 0;
    dp[1] = abs(h[0]-h[1]);
    rep(i,n-2){
        dp[i+2] = min(dp[i+1]+abs(h[i+1]-h[i+2]), dp[i]+abs(h[i]-h[i+2]));
    }
    cout << dp[n-1] << endl;
    return 0;
}