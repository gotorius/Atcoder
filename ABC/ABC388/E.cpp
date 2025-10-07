#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int m = n/2;
  int j = m;
  int ans = 0;
  rep(i,m) {
    while (j < n && a[i]*2 > a[j]) j++;
    if (j == n) break;
    ans++;
    j++;
  }
  cout << ans << endl;
  return 0;
}