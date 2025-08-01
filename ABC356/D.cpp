#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint998244353;

int main() {
  ll n, m;
  cin >> n >> m;
  n++;

  mint ans;
  rep(i,60) {
    if (m>>i&1) {
      ll p = 2ll<<i;
      ll r = n%p;
      ans += (n-r)/2;
      if (r >= (1ll<<i)) {
        ans += r-(1ll<<i);
      }
    }
  }
  cout << ans.val() << endl;
  return 0;
}