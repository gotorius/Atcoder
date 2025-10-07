#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int a, b, d;
  cin >> a >> b >> d;
  while(a <= b){
    cout << a << ' ';
    a += d;
  }
  cout << endl;
}
