#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//ACL
#include <atcoder/all>
using namespace atcoder;

//modint
using mint = modint998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    mint ans = 1;
    rep(i,n){
        ans += ans * (abs(a[i] - b[i]) + 1);
    }
    cout << ans.val() << endl;
    return 0;
}
