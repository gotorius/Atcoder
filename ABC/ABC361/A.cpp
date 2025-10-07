#include <bits/stdc++.h>
using namespace std;


int main(void){

  int i, n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n+1);

  for(i=0; i<n; i++){
    cin >> a[i];
    cout << a[i] << ' ';
    if(i == k-1){
      cout << x << ' ';
    }
  }

  return 0;
}