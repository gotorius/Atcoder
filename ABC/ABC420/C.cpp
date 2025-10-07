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

    rep(i,q){
        char c;
        int x, v;
        cin >> c >> x >> v;
        x--;
        if(c == 'A'){
            if(min(a[x],b[x]) > v){
                ans += min(a[x],b[x])-v;
            }
            a[x] = v;
        }else if(c == 'B') {
            if(min(a[x],b[x]) > v){
                ans += min(a[x],b[x])-v;
            }
            b[x] = v;
        }
        cout << ans << endl;
    }
    return 0;
}