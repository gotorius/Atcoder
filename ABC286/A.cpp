#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    p--,q--,r--,s--;
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n) cin >> a[i];

    rep(i,n) b[i] = a[i];
    rep(i,q-p+1){
        b[i+p] = a[i+r];
        b[i+r] = a[i+p];
    }
    rep(i,n){
        cout << b[i] << ' ';
    }
    cout << endl;
    return 0;
}
