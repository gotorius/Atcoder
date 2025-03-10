#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

unordered_map<ll,ll> memo;

ll f(ll x){
  if(x == 1) return 0;
  if(memo.count(x)) return memo[x];
  ll res = f(x/2) + f(x-x/2) + x;
  return memo[x] = res;
}

int main(void) {
  ll n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}