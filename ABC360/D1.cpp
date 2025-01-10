#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, t;
    string s;
    cin >> n >> t >> s;
    vector<double> x(n);

    vector<pair<double, int>> adjusted;  // 調整後の値と元のインデックスを保持

    rep(i,n) {
        cin >> x[i];
        if (s[i] == '1') x[i] += t + 0.1;
        else x[i] -= t + 0.1;
        adjusted.emplace_back(x[i], i);
    }

    // ソート
    sort(adjusted.begin(), adjusted.end());

    // 結果の計算
    int ans = 0;
    rep(i, n) {
        if (s[adjusted[i].second] == '1') {
            ans += i - adjusted[i].second;
        }
    }

    cout << ans << endl;
    return 0;
}
