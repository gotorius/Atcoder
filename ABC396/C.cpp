#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> b(n), w(m);
    rep(i,n) cin >> b[i];
    rep(i,m) cin >> w[i];
    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend());

    ll ans = 0;
    int now = min(n,m);
    int cnt = 0;
    rep(i,now){
        if(b[i] > 0 && w[i] > 0 || (b[i]+w[i] > 0) && (b[i] < 0 || w[i] > 0)){
            ans += b[i] + w[i];
            cnt++;
        }else{
            break;
        }
    }
    for(int i = cnt; i < n; i++){
        if(b[i] >= 0) ans += b[i];
        else break;
    }

    cout << ans << endl;

    
    return 0;

}