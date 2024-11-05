#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> q(n), r(n);
    rep(i, n) cin >> q[i] >> r[i];
    
    int Q;
    cin >> Q;
    vector<int> t(Q), d(Q);
    rep(i, Q) cin >> t[i] >> d[i];

    rep(i, Q) {
        int idx = t[i] - 1;
        if (d[i] <= r[idx]) {
            cout << r[idx] << endl;
        } else {
            int add = ((d[i] - r[idx] + q[idx] - 1) / q[idx]) * q[idx];
            int result = r[idx] + add;
            cout << result << endl;
        }
    }

    return 0;
}
