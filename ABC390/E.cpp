#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//DP
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;


int main() {
    int n, x;
    cin >> n >> x;
    //xカロリーまで
    vector<int> v(n), a(n), c(n);
    // ビタミンの種類、摂取料、カロリー
    rep(i,n) cin >> v[i] >> a[i] >> c[i];

    vector dp(3,vector(5005,vector<int>(5005,-1)));
    dp[0][0][0] = 0;
    dp[1][0][0] = 0;
    dp[2][0][0] = 0;

    int cnt = 0;
    rep(i,n){
        rep(j,n){
            if(dp[v[i]][i][c[i]] == -1) continue;
            //選ばない場合の遷移
            dp[v[i]][i+1][c[i]] = max(dp[v[i]][i+1][c[i]], dp[v[i]][i][c[i]]);
            
            //選ぶ場合の遷移
            dp[v[i]][i+1][c[i]]
        }
    }
    

   
}