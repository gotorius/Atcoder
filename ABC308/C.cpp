#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<double,int>;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    rep(i,n) cin >> a[i] >> b[i];
    rep(i,n) b[i] += a[i];
    vector<ll> ans(n);
    rep(i,n) ans[i] = i;
    stable_sort(ans.begin(), ans.end(), [&](int i, int j){
        return (ll)a[i]*b[j] > (ll)a[j]*b[i];
    });

    rep(i,n) cout << ans[i]+1 << ' ';
    cout << endl;
    return 0;
}