#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n;
  ll maxa = -1e9, maxb = -1e9;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);

  rep(i,n){
    cin >> a[i];
    if(maxa < a[i]){
      maxa = a[i];
    }
  }

  rep(i,n){
    cin >> b[i];
    if(maxb < b[i]){
      maxb = b[i];
    }
  }

  cout << maxa + maxb << endl;
  return 0;
  
}
