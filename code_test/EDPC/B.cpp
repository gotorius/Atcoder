#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
long long dp[100010];
long long h[100010];

int main() {
   int n, k;
   cin >> n >> k;
   rep(i,n) cin >> h[i];
   rep(i,100010) dp[i] = INF;
   dp[0] = 0;
   
   for(int i=1; i<n; i++){
        for(int j = 1; (i-j >= 0 && j <= k); j++){
            chmin(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
        }
   }
   cout << dp[n-1] << endl;
   return 0;
}
