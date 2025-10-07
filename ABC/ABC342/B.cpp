#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  int q;
  cin >> q;
  vector<int> a(q);
  vector<int> b(q);
  rep(i,q){
    cin >> a[i] >> b[i];
    rep(j,n){
      if(p[j] == a[i]){
        cout << a[i] << endl;
        break;
      }else if(p[j] == b[i]){
        cout << b[i] << endl;
        break;
      }
    }
  }
  return 0;
}
