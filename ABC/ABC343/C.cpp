#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  ll n;
  cin >> n;

  for(ll x = 1e6; x >= 1; x--){
    ll k = x*x*x;
    if(k>n) continue;
    string s = to_string(k);
    string t = s;
    reverse(t.begin(), t.end());
    if(s != t){
      continue;
    }
    cout << s << endl;
    return 0;
  }
  return 0;
}
