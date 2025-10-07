#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n; ll t;
  cin >> n >> t;
  string s;
  cin >> s;
  vector<ll> neg, pos;
  rep(i,n) {
    int x;
    cin >> x;
    if (s[i] == '0') neg.push_back(x);
    else pos.push_back(x);
  }
  sort(neg.begin(), neg.end());
  sort(pos.begin(), pos.end());

  auto left_count = [&](ll r) {
    return lower_bound(pos.begin(), pos.end(), r) - pos.begin();
  };

  ll ans = 0;
  for (ll x : neg) {
    ll l = x-t*2, r = x;
    ans += left_count(r) - left_count(l);
  }
  cout << ans << endl;
  return 0;
}

/*6 3
101010
-5 -1 0 1 2 4
*/