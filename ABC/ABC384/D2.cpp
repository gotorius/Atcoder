#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    ll total_sum = 0;

    rep(i, n) {
        cin >> a[i];
        total_sum += a[i];
    }

    s %= total_sum;
    if (s == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    ll current_sum = 0;
    rep(i, n * 2) { // 配列を2倍に広げて考える
        current_sum += a[i % n];
        if (current_sum == s) {
            cout << "Yes" << endl;
            return 0;
        }
        if (current_sum > s) break;
    }

    cout << "No" << endl;
    return 0;
}
