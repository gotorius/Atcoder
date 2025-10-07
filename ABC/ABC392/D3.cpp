#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    vector<vector<int>> a(n);
    vector<unordered_map<int, double>> mp(n);

    // 入力処理
    rep(i, n) {
        cin >> k[i];
        a[i].resize(k[i]);
        rep(j, k[i]) {
            cin >> a[i][j];
            mp[i][a[i][j]]++;
        }
    }

    // 確率の事前計算
    vector<unordered_map<int, double>> prob(n);
    rep(i, n) {
        for (auto& p : mp[i]) {
            prob[i][p.first] = p.second / k[i];
        }
    }

    double ans = 0;
    // 共通要素の計算
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double cnt = 0;
            // サイズが小さい方のマップを基準に計算
            if (prob[i].size() > prob[j].size()) {
                swap(i, j);
            }
            for (auto& p : prob[i]) {
                int num = p.first;
                if (prob[j].count(num)) {
                    cnt += p.second * prob[j][num];
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}