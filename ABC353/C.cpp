#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  const int M = 1e8;
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end());

  ll ans = 0;
  rep(i,n) ans += a[i]*ll(n-1);

  int r = n-1;
  rep(i,n){
    while(r >= 0 && a[i] + a[r] >= M) r--;
    ans -= ll(n-max(r,i)-1)*M;
  }
  cout << ans << endl;
  return 0;
}

