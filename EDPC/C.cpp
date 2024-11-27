#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    vector<vector<ll>> dp(n+1, vector<ll>(3, 0));
    
    rep(i, n) {
        rep(j, 3) {
            cin >> a[i][j];
        }
    }

    rep(i, n) {
        rep(x, 3) {
            rep(y, 3) {
                if (x == y) continue;
                chmax(dp[i + 1][x], dp[i][y] + a[i][x]);
            }
        }
    }
    ll ans = max({dp[n][0], dp[n][1], dp[n][2]});
    cout << ans << endl;

    return 0;
}