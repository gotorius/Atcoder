#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int q, k=0;
  cin >> q;
  vector<int> a(q);
  vector<int> b(q);
  vector<int> c(q);
  rep(i,q){
    cin >> a[i] >> b[i];
    if(a[i] == 1){
      c[k] = b[i];
      k++;
    }else{
      cout << c[k-b[i]] << endl;
    }
  }
  return 0;

}
