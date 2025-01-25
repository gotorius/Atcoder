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

    if (a[0] == 0) {
        cout << "No" << endl;
        return 0;
    }

    ll ratio = a[1] / a[0];

    for(int i = 1; i < n-1; ++i) {
        if (a[i] == 0 || a[i+1] % a[i] != 0 || a[i+1] / a[i] != ratio) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
