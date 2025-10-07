#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int t;
    cin >> t;
    rep(i,t){
        int n, m;
        cin >> n >> m;
        vector<int> a(n),b(n);
        vector<bool> aj(n);
        rep(j,n){
            cin >> a[j];
            a[j] %= m;
        }
        rep(k,n){
            cin >> b[k];
            b[k] %= m;
        }

        ll ans = 0;
        rep(d,n){
            auto p = lower_bound(a.begin(), a.end(),m-b[d]);
            ans += m-b[d]-*p;
            
        }
        cout << ans << endl;
    }
    return 0;
}