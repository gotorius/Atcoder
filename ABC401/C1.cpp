#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
const ll MOD = 10000000;

int main() {
    ll n, k;
    cin >> n >> k;
    if (n < k) {
        cout << 1 << endl;
        return 0;
    }

    vector<ll> a(n + 1, 0);
    rep(i, k) a[i] = 1;
    a[k] = k % MOD;

    // Sliding window sum of the last k elements
    ll sum = a[k];
    for (int i = k + 1; i <= n; i++) {
        // Compute a[i] = sum of a[i-k ... a[i-1]
        a[i] = sum;
        // Update sum for the next iteration:
        // sum = sum + a[i] - a[i-k]
        sum = (sum + a[i] - a[i - k]) % MOD;
        // Ensure sum is non-negative
        if (sum < 0) sum += MOD;
    }

    cout << a[n] % MOD << endl;
    return 0;
}