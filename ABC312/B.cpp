#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) {
        cin >> s[i];  // 1行ずつ文字列として入力
    }

    auto f = [&](int x, int y) -> bool {
        // 左上の3x3のブロックが全て#か確認
        rep(i, 3) {
            rep(j, 3) {
                if (s[x + i][y + j] == '.') {
                    return false;
                }
            }
        }
        // 3x4右側が全て.か確認
        rep(i, 4) {
            if (s[x + i][y + 3] == '#') {
                return false;
            }
        }
        // 4x3下側が全て.か確認
        rep(j, 3) {
            if (s[x + 3][y + j] == '#') {
                return false;
            }
        }
        // 右下の3x3のブロックが全て#か確認
        rep(i, 3) {
            rep(j, 3) {
                if (s[x + 6 + i][y + 6 + j] == '.') {
                    return false;
                }
            }
        }
        // 3x4左側が全て.か確認
        rep(i, 4) {
            if (s[x + 5 + i][y + 5] == '#') {
                return false;
            }
        }
        // 4x3上側が全て.か確認
        rep(j, 3) {
            if (s[x + 5][y + 5 + j] == '#') {
                return false;
            }
        }
        return true;
    };

    int count = 0;
    for (int i = 0; i <= n - 9; i++) {
        for (int j = 0; j <= m - 9; j++) {
            if(f(i,j)) cout << i+1 << ' ' << j+1 << endl;
        }
    }
    return 0;
}
