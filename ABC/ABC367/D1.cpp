#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int L = 0;
  rep(i,n) L = (L+a[i])%m;

  ll ans = 0;
  vector<int> cnt(m);
  int s = 0;
  rep(ri,2) {
    rep(r,n) {
      if (ri == 1) cnt[(s-L+m)%m]--;
      if (ri == 1) ans += cnt[s];
      cnt[s]++;
      s = (s+a[r])%m;
    }
  }
  cout << ans << endl;
  return 0;
}