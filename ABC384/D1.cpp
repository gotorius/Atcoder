#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, string>;

int main() {
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    vector<ll> as(n+1, 0);  // as[0] は 0 で初期化
    vector<ll> bs(n+1, 0);  // bs[0] は 0 で初期化
    ll wa = 0;

    rep(i, n) {
        cin >> a[i];
        wa += a[i];
        as[i + 1] = wa;
    }

    s %= wa*2;
    if(s == 0){
        cout << "Yes" << endl;
        return 0;
    }

    ll wb = 0;
    rep(i, n) {
        wb += a[n - i - 1];
        bs[i + 1] = wb;
    }


    rep(i, n+1) {
        ll sum = bs[i];
        if(sum == s){
            cout << "Yes" << endl;
            return 0;
        }

        auto it = lower_bound(as.begin(), as.end(), s - sum);
        if (it != as.end() && *it == s - sum) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
