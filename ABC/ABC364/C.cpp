#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int i;
    ll n, x, y;
    int x1=0, y1=0;
    ll sum1=0, sum2=0;
    
    cin >> n >> x >> y;
    
    vector<ll> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<ll> b(n);
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end(), greater<>());
	  sort(b.begin(), b.end(), greater<>());
    
    for(i=0; i<n; i++){
      sum1 += a[i];
      x1++;
      if(x < sum1){
        break;
      }
    }
    
    for(i=0; i<n; i++){
      sum2 += b[i];
      y1++;
      if(y < sum2){
        break;
      }
    }
    
    cout << min(x1, y1) << endl;
    
    return 0;
}
