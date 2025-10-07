#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// __int128 を使った乗算判定
bool check(ll n, ll p2a, ll b) {
    __int128 x = __int128(p2a) * b * b;
    return x < n;
}

// 2^a * b^2 < n となる最大の b を求める（二分探索）
ll max_b(ll n, ll p2a) {
    ll ok = 0, ng = 1e9 + 1;  // b の範囲（上限は十分大きく）
    while (ng - ok > 1) {
        ll mid = (ok + ng) / 2;
        if (check(n, p2a, mid)) ok = mid;
        else ng = mid;
    }
    return ok;
}

int main() {
    ll n;
    cin >> n;
    set<ll> st;

    for (int a = 1; ; a++) {
        ll p2a = 1LL << a;
        if (p2a > n) break;

        ll b_max = max_b(n, p2a);
        for (ll b = 1; b <= b_max; b++) {
            __int128 x = __int128(p2a) * b * b;
            st.insert((ll)x); // __int128 を ll にキャスト
        }
    }

    cout << st.size() << endl;
    return 0;
}
