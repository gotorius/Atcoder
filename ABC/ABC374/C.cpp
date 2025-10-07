#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(void){
  int n;
  cin >> n;
  vector<ll> k(n);
  ll suma = 0, sumb = 0, sumk = 0;
  ll mink = 1e8, m = 0;
  ll ans = 0;
  rep(i,n){
    cin >> k[i];
    sumk += k[i];
  }
  for (int bit = 0; bit < (1 << n); ++bit) {
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {
        suma += k[i];
      }
    }
    sumb = sumk - suma;
    m = abs(suma - sumb);
    if(mink > m){
      ans = max(suma, sumb);
      mink = m;
    }
    suma = 0;
    sumb = 0;
  }

  cout << ans << endl;
  return 0;
  
}