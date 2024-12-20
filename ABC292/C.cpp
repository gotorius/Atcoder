#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;


int main() {
  int n;
  cin >> n;
  vector<ll> f(n+1);
  for (int a = 1; a <= n; a++) {
    for (int b = 1; a*b <= n; b++) {
      f[a*b]++;
    }
  }

  ll ans = 0;
  for (int x = 1; x < n; x++) {
    ans += f[x]*f[n-x];
  }
  cout << ans << endl;
  return 0;
}