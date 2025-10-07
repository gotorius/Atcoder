#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n,q,count=0;
  cin >> n >> q;
  vector<int> t(q);
  vector<int> a(n, 1);
  rep(i,q){
    cin >> t[i];
    if(a[t[i]-1] == 1){
      a[t[i]-1] = 0;
    }else{
      a[t[i]-1] = 1;
    }
  }
  rep(i,n){
    if(a[i] == 1){
      count++;
    }
  }
  cout << count << endl;
  return 0;
}


