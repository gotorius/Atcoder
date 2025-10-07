#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(void){
  int i, n, m, h;
  int ans = 0;
  cin >> n >> m;

  for(i=0; i<n; i++){
    cin >> h;
    m -= h;
    if(m >= 0){
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}