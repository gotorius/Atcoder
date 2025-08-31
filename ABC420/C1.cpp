#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    ll ans = 0;
    rep(i,n) ans += min(a[i], b[i]);
    cout << ans << endl;

    rep(i,q){
        char c;
        int x, v;
        cin >> c >> x >> v;
        x--;
        if(c == 'A'){
            if(min(a[x], b[x]) < v) ans += min(v,b[x])-a[x];
            else ans -= min(a[x],b[x])-v;
            a[x] = v;
        }else if(c == 'B') {
            if(min(a[x], b[x]) < v) ans += min(v,a[x])-b[x];
            else ans -= min(a[x],b[x])-v;
            b[x] = v;
        }
        cout << ans << endl;
        rep(i,n) cout << a[i] << ' ';
        cout << endl;
        rep(i,n) cout << b[i] << ' ';
        cout << endl;
    }
    return 0;
}