#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

struct g {
    int x;
    int y;
};

// 移動関数: 高橋君の現在位置を参照渡しで更新
void next(g &t, char a) {
    if (a == 'R') {
        t.x++;
    } else if (a == 'L') {
        t.x--;
    } else if (a == 'U') {
        t.y++;
    } else if (a == 'D') {
        t.y--;
    }
}

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;

    // 各アイテムの位置を記録するマップ
    map<P, bool> hp;
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        hp[{x, y}] = true;  // アイテムが存在する位置をtrueで記録
    }

    // 高橋君の開始位置
    g now = {0, 0};
    rep(i, n) {
        // 移動前に体力チェック
        if (h <= 0) {
            cout << "No" << endl;
            return 0;
        }

        // 指定方向に移動
        next(now, s[i]);
        h--;  // 移動で体力を1消費

        P pos = {now.x, now.y};
        
        // アイテムがあり、かつ体力がK未満なら回復
        if (hp.find(pos) != hp.end() && h < k) {
            h = k;       // HPをKに回復
            hp.erase(pos);  // 回復地点からアイテムを削除
        }
    }

    // 全ての移動を終えた場合
    cout << "Yes" << endl;
    return 0;
}
