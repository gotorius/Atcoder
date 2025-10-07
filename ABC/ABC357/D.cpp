#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint998244353;

int main() {
  ll n;
  cin >> n;
  mint A = 1;
  {
    ll _n = n;
    while (_n) {
      A *= 10;
      _n /= 10;
    }
  }

  auto com = [&](mint a1, mint b1, mint a2, mint b2) -> pair<mint,mint> {
    return {a1*a2, b1*a2 + b2};
  };
  auto f = [&](auto f, ll t) -> pair<mint,mint> {
    if (t == 0) return {1,0};
    auto [pa,pb] = f(f,t/2);
    auto [a,b] = com(pa,pb,pa,pb);
    if (t%2) {
      tie(a,b) = com(a,b,A,n);
    }
    return {a,b};
  };

  auto [a,b] = f(f,n);
  cout << b.val() << endl;
  return 0;
}