#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> c(n);
    rep(i,n) cin >> c[i];
    
    vector<vector<int>> zoo(n); // zoo[i] に i 番の動物園で見られる動物の一覧
    rep(i,m){
        int k;
        cin >> k;
        rep(j,k){
            int a;
            cin >> a;
            a--;
            zoo[a].push_back(i);
        }
    }

    ll ans = LLONG_MAX;

    rep(bit, 1<<n){
        vector<int> count(m, 0);
        ll cost = 0;
        rep(i, n){
            if (bit & (1<<i)){
                cost += c[i];
                for (int a : zoo[i]) count[a]++;
            }
        }
        bool ok = all_of(count.begin(), count.end(), [](int x){ return x >= 2; });
        if (ok) ans = min(ans, cost);
    }

    cout << ans << endl;
    return 0;
}
