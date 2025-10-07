#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

ll sqrt1(ll x) {
    if (x == 0) return 0;
    ll l = 1, r = 1e9 + 1;
    while (l < r) {
        ll m = (l + r + 1) / 2;
        if (m * m <= x) l = m;
        else r = m - 1;
    }
    return l;
}

ll count(ll n) {
    ll cnt = 0;
    for (int a = 1; a <= 60; ++a) {
        ll p = 1LL << a;
        if (p > n) break;
        ll M = n / p;
        ll K = sqrt1(M);
        ll cnt1 = (K + 1) / 2;
        cnt += cnt1;
    }
    return cnt;
}

int main() {
    ll n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}