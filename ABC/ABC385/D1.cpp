#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m, sx, sy;
    cin >> n >> m >> sx >> sy;

    map<ll, vector<ll>> xpos, ypos;

    // 障害物の位置入力
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        ypos[x].push_back(y);
        xpos[y].push_back(x);
    }

    // 障害物の位置をソート
    for (auto &p : ypos) sort(p.second.begin(), p.second.end());
    for (auto &p : xpos) sort(p.second.begin(), p.second.end());

    int ans = 0;

    // 各移動
    for (ll i = 0; i < m; i++) {
        char d;
        ll c;
        cin >> d >> c;

        if (d == 'U') {  // 上移動
            if (ypos.count(sx)) {
                auto &v = ypos[sx];
                for (auto it = v.begin(); it != v.end();) {
                    if (sy <= *it && sy + c > *it) {
                        ans++;
                        it = v.erase(it);  // 障害物削除
                    } else {
                        ++it;
                    }
                }
            }
            sy += c;
        } else if (d == 'D') {  // 下移動
            if (ypos.count(sx)) {
                auto &v = ypos[sx];
                for (auto it = v.begin(); it != v.end();) {
                    if (sy - c <= *it && sy > *it) {
                        ans++;
                        it = v.erase(it);  // 障害物削除
                    } else {
                        ++it;
                    }
                }
            }
            sy -= c;
        } else if (d == 'R') {  // 右移動
            if (xpos.count(sy)) {
                auto &v = xpos[sy];
                for (auto it = v.begin(); it != v.end();) {
                    if (sx <= *it && sx + c > *it) {
                        ans++;
                        it = v.erase(it);  // 障害物削除
                    } else {
                        ++it;
                    }
                }
            }
            sx += c;
        } else if (d == 'L') {  // 左移動
            if (xpos.count(sy)) {
                auto &v = xpos[sy];
                for (auto it = v.begin(); it != v.end();) {
                    if (sx - c <= *it && sx > *it) {
                        ans++;
                        it = v.erase(it);  // 障害物削除
                    } else {
                        ++it;
                    }
                }
            }
            sx -= c;
        }
    }

    cout << sx << ' ' << sy << ' ' << ans << endl;
    return 0;
}
