#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int m, i=0;
  cin >> m;
  int a = 10;
  vector<int> b(20);
  while(a>=0){
    if(m == 0){
      cout << i << endl;
      for(int j=0; j<i; j++){
        cout << b[j] << endl;
      }
      break;
    }else if(m - pow(3,a) >= 0){
      m = m - pow(3,a);
      b[i] = a;
      i++;
    }else{
      a--;
    }
  }
  return 0;
}

