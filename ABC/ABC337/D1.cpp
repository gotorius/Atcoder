#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];

    int ans = INT_MAX;

    // 横方向のスキャン
    for (int i = 0; i < H; i++) {
        for (int j = 0; j <= W - K; j++) {
            int dot_count = 0;
            bool has_x = false;
            for (int k = 0; k < K; k++) {
                if (S[i][j + k] == 'x') {
                    has_x = true;
                    break;
                }
                if (S[i][j + k] == '.') dot_count++;
            }
            if (!has_x) ans = min(ans, dot_count);
        }
    }

    // 縦方向のスキャン
    for (int j = 0; j < W; j++) {
        for (int i = 0; i <= H - K; i++) {
            int dot_count = 0;
            bool has_x = false;
            for (int k = 0; k < K; k++) {
                if (S[i + k][j] == 'x') {
                    has_x = true;
                    break;
                }
                if (S[i + k][j] == '.') dot_count++;
            }
            if (!has_x) ans = min(ans, dot_count);
        }
    }

    // 解が見つからない場合は -1 を出力
    if (ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
