#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n,k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    int INF = 1001001001;
    vector<int> dp(n+1, INF);

    dp[0] = 0;
    for(int i=1; i<n; i++){
        for(int j=1; j<=k; j++){
            if(i-j >= 0){
                int cost = dp[i-j] + abs(h[i-j]-h[i]);
                if(cost < dp[i]){
                    dp[i] = cost;
                }
            }
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}