#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int a, b;
  cin >> a >> b;
  rep(i,10){
    if(i != a+b){
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
