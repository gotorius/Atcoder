#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];

    int cnt = 1, ans = 1;  // cnt: 現在の連続区間の長さ, ans: 最大長
    for (int i = 1; i < n; i++) {
        if (h[i] == h[i-1]) {
            cnt++;  // 連続している場合、区間を拡張
            ans = max(ans, cnt);
        } else {
            cnt = 1;  // 連続が途切れたらリセット
        }
    }

    cout << ans << endl;
    return 0;
}
