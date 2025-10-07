#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

unordered_map<ll,ll> memo;
ll f(ll x) {
  if (x == 0) return 1;
  if (memo.count(x)) return memo[x];
  ll res = f(x/2)+f(x/3);
  return memo[x] = res;
}

int main() {
  ll n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}