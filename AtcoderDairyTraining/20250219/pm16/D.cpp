#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
#include <atcoder/all>
using namespace atcoder;
//modint
using mint = modint998244353;

int main(void){
    ll n;
    cin >> n;
    mint ans = n;
    if(ans.val() < 0) ans += 998244353;
    cout << ans.val() << endl;
    return 0;
}
