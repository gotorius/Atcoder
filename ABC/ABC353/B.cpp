#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n, k, e, count=1;
  cin >> n >> k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  e = k;
  rep(i,n){
    if(e == k){
      e -= a[i];
    }else if(e >= a[i]){
      e -= a[i];
    }else{
      count++;
      e = k;
      e -= a[i];
    }
  }
  cout << count << endl;
  return 0;
}




