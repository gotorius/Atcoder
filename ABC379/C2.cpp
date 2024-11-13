#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> x(m);
    vector<ll> a(m);
    map<ll, ll> p;
    
    rep(i, m) cin >> x[i];
    rep(i, m) cin >> a[i];
    rep(i, m) p[x[i]] = a[i];
    p[n] = 0;

    ll ans = 0;

    auto f = [&](int i, int j) {
        int sum = 0;
        for (int q = 1; q < j - i; q++) {
            sum += q;
        }
        return sum;
    };

    auto f2 = [&](int i, int j) {
        if (j - i < p[i]) {
            p[j] += p[i] - (j - i);
        } else if (j - i > p[i]) {
            ans = -1;
        }
    };
    
    rep(i, m) {
        if (i == m - 1) {
            ans += p[x[i]] - 1;
            f2(x[i], n);
            if (ans == -1) {
                cout << ans << endl;
                return 0;
            }
        } else {
            ans += f(x[i], x[i + 1]);
            f2(x[i], x[i + 1]);
            if (ans == -1) {
                cout << ans << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

