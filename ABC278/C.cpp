#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
    ll n, q;
    cin >> n >> q;
    
    vector<vector<bool>> f(n, vector<bool>(n,false));
    rep(i,q){
        ll t, a, b;
        cin >> t >> a >> b;
        a--; b--;
        if(t == 1){
            f[a][b] = true;
        }else if(t == 2){
            f[a][b] = false;
        }else if(t == 3){
            if(f[a][b] && f[b][a]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;

}
