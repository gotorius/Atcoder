#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll N, M, D;
    cin >> N >> M >> D;
    
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    ll ans = -1;
    for (int i = 0; i < M; i++) {
        ll b;
        cin >> b;
        
        auto it = upper_bound(A.begin(), A.end(), b + D);
        if (it != A.begin()) {
            --it;
            if (*it >= b - D) {
                ans = max(ans, *it + b);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
