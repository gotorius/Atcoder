#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n) { return n * (n + 1) / 2; }

int main(void){
  int i, count=0;
  ll n;
  int x=1;
  cin >> n;
  vector<ll> a(n);
  for(i=0; i<n; i++){
    cin >> a[i];
  }

  int pre=0;
  ll ans = n;

    for (int i = 1; i < n - 1; i++) {
        if (a[i] - a[i - 1] != a[i + 1] - a[i]) {
            ans += f(i - pre);
            pre = i;
        }
    }
    ans += f(n - 1 - pre);

    cout << ans << endl;

  return 0;
}