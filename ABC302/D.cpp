#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using mint = modint998244353;

int main() {
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    sort(b.begin(), b.end());

    int ans = 0;
    rep(i,n){
        auto p = lower_bound(b.begin(), b.end(), a[i]);
        
    }

}