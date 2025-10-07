#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    int n = s.size();

    vector<vector<ll>> dp(n + 1, vector<ll>(2, LLONG_MAX));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        // CapsLock OFF の場合
        if (dp[i][0] != LLONG_MAX) {
            if (s[i] == 'a') {
                dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + x);     // aキーのみ
                dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + y + z); // Shift+a (CapsLock ONにする)
            } else { // s[i] == 'A'
                dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + y);     // Shift+a
                dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + x + z); // aキー + CapsLock ON
            }
        }

        // CapsLock ON の場合
        if (dp[i][1] != LLONG_MAX) {
            if (s[i] == 'a') {
                dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + y);     // Shift+a (CapsLock ON)
                dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + x + z); // aキー + CapsLock OFF
            } else { // s[i] == 'A'
                dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + x);     // aキー (CapsLock ON)
                dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + y + z); // Shift+a (CapsLock OFF)
            }
        }
    }

    ll ans = min(dp[n][0], dp[n][1]);
    cout << ans << endl;
    return 0;
}
