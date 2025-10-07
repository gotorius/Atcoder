#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;
#include <atcoder/all>
using namespace atcoder;

// modint
using mint = modint998244353;

int main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    mint A = a, B = b, C = c, D = d, E = e, F = f;
    cout << (A * B * C - D * E * F).val() << endl;

    return 0;
}
