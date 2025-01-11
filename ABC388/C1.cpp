#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end());
    ll ans = 0;
    rep(i,n-1) {
        auto x = lower_bound(a.begin(), a.end(), a[i] * 2);
        int index = distance(a.begin(), x);
        ans += n - index;
    }
    cout << ans << endl;
    return 0;
}
