#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(void){
  int n, k, i;
  cin >> n >> k;
  vector<int> a(n);
  for(i=0; i<n; i++){
    cin >> a[i];
  }

  int ans = 1e9;

  sort(a.begin(), a.end());
  for(i=0; i<k+1; i++){
    int r = i + (n-k) - 1;
    int now = a[r] - a[i];
    ans = min(ans, now);
  }

  cout << ans << endl;

  return 0;
}