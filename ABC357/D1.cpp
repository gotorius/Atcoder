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
  mint a = 1;
  {
    ll _n = n;
    while (_n) {
      a *= 10;
      _n /= 10;
    }
  }

  mint s = (a.pow(n) - 1)/(a - 1);
  s *= n;
  cout << s.val() << endl;
  return 0;
}