#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(void){
   int n, x, sum = 0;
   cin >> n >> x;
   vector<int> a(n);
   rep(i,n){
      cin >> a[i];
      if(a[i] <= x){
         sum += a[i];
      }
   }
   cout << sum << endl;
}
