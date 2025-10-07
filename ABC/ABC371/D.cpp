#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n;
  cin >> n;
  vector<int> x(n), p(n);
  rep(i,n) cin >> x[i];
  rep(i,n) cin >> p[i];

  vector<ll> s(n+1);
  rep(i,n) s[i+1] = s[i]+p[i];

  auto f = [&](int r){
    int pos = upper_bound(x.begin(), x.end(), r) - x.begin();
    return s[pos];
  };

  int q;
  cin >> q;
  rep(qi,q){
    int l,r;
    cin >> l >> r;
    ll ans = f(r) - f(l-1);
    cout << ans << '\n';
  }
  return 0;
}

