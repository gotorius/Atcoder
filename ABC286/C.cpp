#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    deque<char> dq(s.begin(), s.end()); // dequeを初期化

    ll ans1 = LLONG_MAX;
    rep(i, n) {
        ll ans = a * i;

        // 回転操作
        rotate(dq.begin(), dq.begin() + 1, dq.end());

        // コスト計算
        for (int l = 0, r = n - 1; l < r; l++, r--) {
            if (dq[l] != dq[r]) ans += b;
        }

        ans1 = min(ans1, ans);
    }
    cout << ans1 << endl;
    return 0;
}
