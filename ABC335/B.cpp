#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n;
  cin >> n;
  rep(x,n+1){
    rep(y,n+1){
      rep(z,n+1){
        if(x+y+z <= n){
          cout << x << ' ' << y << ' ' << z << endl;
        }
      }
    }
  }
  return 0;
}