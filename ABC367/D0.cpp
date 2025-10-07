#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<int> s(n+1);
  rep(i,n) s[i+1] = (s[i]+a[i])%m;

  int L = s[n];

  ll ans = 0;
  vector<int> cnt(m);
  rep(r,n) {
    ans += cnt[s[r]];
    ans += cnt[(s[r]-L+m)%m];
    cnt[s[r]]++;
  }
  cout << ans << endl;
  return 0;
}