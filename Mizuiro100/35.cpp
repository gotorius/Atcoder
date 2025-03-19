#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//35　DPL_1_B - 0,1ナップザック問題　基本問題です。

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> weight(n), value(n);
    rep(i, n) cin >> value[i] >> weight[i];

    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            if (j >= weight[i]) {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - weight[i]] + value[i]);
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }
    cout << dp[n][w] << endl;
    return 0;
}
