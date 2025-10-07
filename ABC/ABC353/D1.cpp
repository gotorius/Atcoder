#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint998244353;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  mint ans;
  rep(i,n) ans += mint(a[i])*i;

  vector<mint> b(n);
  rep(i,n) {
    b[i] = 1;
    int x = a[i];
    while (x) b[i] *= 10, x /= 10;
  }

  mint s = 0;
  for (int i = n-1; i >= 0; i--) {
    ans += s*a[i];
    s += b[i];
  }

  cout << ans.val() << endl;
  return 0;
}