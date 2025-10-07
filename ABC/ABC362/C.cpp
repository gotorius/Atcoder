#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void){
  
  int i,n;
  cin >> n;
  vector<int> L(n);
  vector<int> R(n);
  
  for(i=0; i<n; i++){
    cin >> L[i] >> R[i];
  }
  
  ll sumL = 0;
  ll sumR = 0;
  ll sum = 0;
  
  for(i=0; i<n; i++){
    sumL += L[i];
    sumR += R[i];
  }
  
  if(sumL <= 0 && sumR >= 0){
    cout << "Yes" << endl;
    sum = sumL;
    
    vector<int> ans = L;
    ll rem = -sumL;
    for(i=0; i<n; i++){
      ll canadd = R[i]-L[i];
      if(canadd < rem){
        ans[i] = R[i];
        rem -= canadd;
      }else{
        ans[i] += rem;
        break;
      }
    }
    
    for(i=0; i<n; i++){
      cout << ans[i] << ' ';
    }
    
  }else{
    cout << "No" << endl;
    
  }
  return 0;
}