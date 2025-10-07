#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> bh(n,0);
    vector<ll> bw(n,0);
    vector<ll> wh(n, 1e10);
    vector<ll> ww(n, 1e10);

    rep(i,m){
        ll x, y;
        char c;
        cin >> x >> y >> c;
        x--,y--;

        if(c == 'B'){
            if(x > bh[y]) bh[y] = x;
            if(y > bw[x]) bw[x] = y;
            if(x >= wh[x] || y >= ww[y]){
                cout << x<< endl;
                cout << "No" << endl;
                return 0;
            }
        }
        if(c == 'W'){
            if(x < wh[y]) wh[y] = x;
            if(y < ww[x]) ww[x] = y;
            if(x <= bh[x] || y <= bw[y]){
                cout << x<< endl;
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;   
}