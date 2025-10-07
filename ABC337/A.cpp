#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n, suma = 0, sumb = 0;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  rep(i,n){
    cin >> a[i] >> b[i];
    suma += a[i];
    sumb += b[i];
  }
  if(suma > sumb){
    cout << "Takahashi" << endl;
  }else if(suma < sumb){
    cout << "Aoki" << endl;
  }else{
    cout << "Draw" << endl;
  }
  return 0;
}