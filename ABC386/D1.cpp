#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;

    const ll INF = 1e9 + 10; // 適切な大きな値
    vector<ll> bh(n, 0), bw(n, 0);
    vector<ll> wh(n, INF), ww(n, INF);

    rep(i, m) {
        ll x, y;
        char c;
        cin >> x >> y >> c;
        x--, y--;

        if (c == 'B') {
            bh[y] = max(bh[y], x);
            bw[x] = max(bw[x], y);
            if (x >= wh[y] || y >= ww[x]) {
                cout << "No" << endl;
                return 0;
            }
        }

        if (c == 'W') {
            wh[y] = min(wh[y], x);
            ww[x] = min(ww[x], y);
            if (x <= bh[y] || y <= bw[x]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
