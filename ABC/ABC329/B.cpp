#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(void){
   int n,ans;
   cin >> n;
   vector<int> a(n);
   rep(i,n) cin >> a[i];
   sort(a.begin(), a.end());
   rep(i,n-1){
      if(a[n-i-1] != a[n-i-2]){
         cout << a[n-i-2] << endl;
         return 0;
      }
   }
   return 0;
}
