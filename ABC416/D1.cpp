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
        rep(j,n) cin >> a[j], a[j] %= m;
        rep(j,n) cin >> b[j], b[j] %= m;
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());

        int st = 0;
        ll ans = 0;
        rep(k,n){
            while(a[k]+b[st] < m && st < n) st++;
            if(st >= n) break;
            ans += (a[k]+b[st])%m;
            a[k] = 0;
            b[st] = 0;
        }
        rep(s,n) ans += a[s]+b[s];
        cout << ans << endl;

    }
    return 0;
}