#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];

    rep(i,n-m+1){
        rep(j,n-m+1){
            bool ok = true;
            rep(k,m){
                rep(l,m){
                    if(a[i+k][j+l] != b[k][l]){
                        ok = false;
                        break;
                    }
                }
            }
            if(ok){
                cout << i+1 << ' ' << j+1 << endl;
                return 0;
            }
        }
    }
    return 0;

}