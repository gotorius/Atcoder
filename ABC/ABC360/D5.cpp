#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n; ll t;
  cin >> n >> t;
  string s;
  cin >> s;
  vector<pair<ll,int>> ants;
  rep(i,n) {
    int x;
    cin >> x;
    ants.emplace_back(x, (s[i]=='0')?-1:1);
  }
  ll ans = 0;
  rep(ti,2) {
    sort(ants.begin(), ants.end());
    int neg = 0;
    ll now = 0;
    for (auto [x,d] : ants) {
      if (d == -1) neg++;
      else now += neg;
    }
    if (ti == 0) ans -= now; else ans += now;
    for (auto&& [x,d] : ants) x += d*t;
  }
  cout << ans << endl;
  return 0;
}