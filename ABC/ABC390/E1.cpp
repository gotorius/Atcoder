#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, x;
    cin >> n >> x;  // 食材の数 n と最大カロリー x を入力

    // 各食材のビタミン種類、摂取量、カロリー
    vector<int> v(n), a(n), c(n);
    
    // 食材ごとにビタミン種類（1, 2, 3）、摂取量、カロリーを入力
    rep(i, n) cin >> v[i] >> a[i] >> c[i];

    // dp[j]: カロリーjに対する最小ビタミン摂取量
    vector<int> dp(x + 1, -1);  // 初期化
    dp[0] = 0;  // カロリー0のときの摂取量は0

    // DPの遷移
    rep(i, n) {  // 各食材を処理
        for (int j = x; j >= c[i]; j--) { // カロリーjを逆順でループ
            if (dp[j - c[i]] != -1) {  // 遷移可能な場合
                // 選択する場合：現在のビタミン摂取量の最小値を更新
                dp[j] = max(dp[j], min({dp[j - c[i]], a[i]})); // 最小値を更新
            }
        }
    }

    // 結果：dp[j] の中で最大の値を探す
    int result = 0;
    for (int j = 0; j <= x; j++) {
        result = max(result, dp[j]);
    }

    cout << result << endl;  // 出力
    return 0;
}
