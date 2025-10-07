#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
ll INF = 1001001001;


int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(n);
    vector<vector<int>> f(n, vector<int>(n,INF));
    rep(i,n) f[i][i] = 0;
    ll ans = 0;

    rep(i,m){
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        f[a][b] = c;
    }
    rep(k,n){
        rep(i,n){
            rep(j,n){
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
                if(f[i][j] != INF) ans += f[i][j];
            }
        }
    }
    cout << ans << endl;
    return 0;
}