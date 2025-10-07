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
        int num1, num2;
        if(c == 'A'){
            num1 = min(a[x], b[x]);
            a[x] = v;
            num2 = min(a[x], b[x]);
            ans -= num1 - num2;
        }else if(c == 'B') {
            num1 = min(a[x], b[x]);
            b[x] = v;
            num2 = min(a[x], b[x]);
            ans -= num1 - num2;
        }
        cout << ans << endl;
    }
    return 0;
}