#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(void){
  int n,a,i;
  cin >> n >> a;
  vector<int> t(n);
  vector<int> t1(n);
  for(i=0; i<n; i++){
    cin >> t[i];
  }
  t1[0] = t[0] + a;
  for(i=1; i<n; i++){

    if(t[i] >= t1[i-1]){
      t1[i] = t[i] + a;
    }else{
      t1[i] = t1[i-1] + a;
    }
  }

  for(i=0; i<n; i++){
    cout << t1[i] << "\n";
  }
  return 0;
}