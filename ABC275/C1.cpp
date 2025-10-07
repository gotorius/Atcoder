#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(9);
    for (int i = 0; i < 9; i++) cin >> s[i];

    set<pair<int, int>> points;

    // ポーンのある座標をセットに格納
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (s[i][j] == '#') {
                points.insert({i, j});
            }
        }
    }

    int ans = 0;

    // すべてのペアを調べる
    for (auto [r1, c1] : points) {
        for (auto [r2, c2] : points) {
            // 左上と右下の点を選ぶ (r1, c1) が左上、(r2, c2) が右下
            if (r1 < r2 && c1 < c2) {
                // 正方形の性質を満たすか確認
                if (points.count({r1, c2}) && points.count({r2, c1})) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
