#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n;
  ll max=0, maxn;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);
  rep(i,n){
    cin >> a[i] >> b[i];
    if(max < b[i] - a[i]){
      max = b[i] - a[i];
      maxn = i;
    }
  }
  ll ans = 0;

  rep(i,n){
    if(i != maxn){
      ans += a[i];
    }else{
      ans += b[i];
    }
  }

  cout << ans << endl;
  
  return 0;
}

