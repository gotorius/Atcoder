#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> d;
    rep(i, n) {
        if (s[i] == '1') d.push_back(i);
    }

    int ds = d.size();
    if (ds == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1001001001001;
    for (int i = 0; i + ds <= n; i++) {
        int left = i;
        int right = i + ds - 1;
        int median = left + (right - left) / 2;

        ll cost = 0;
        int cnt = 0;
        for (int j = 0; j < ds; j++) {
            cost += abs(d[j] - (median - (ds / 2 - cnt)));
            cnt++;
        }

        ans = min(ans, cost);
    }

    cout << ans << endl;
    return 0;
}