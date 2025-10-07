#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//4　パ研杯2019 C - カラオケ

int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    rep(i,n){
        rep(j,m){
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    rep(i,m-1){
        for(int j=i+1; j<m; j++){
            ll sum = 0;
            rep(k,n){
                sum += max(a[k][i], a[k][j]);
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
    return 0;
}