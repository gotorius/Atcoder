#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  vector<int> a(9);
  vector<int> b(9);
  int suma=0, sumb=0;

  rep(i,9) cin >> a[i], suma += a[i];
  rep(i,8) cin >> b[i], sumb += b[i];

  int ans = suma - sumb + 1;
  cout << ans << endl;

  return 0;
}

