#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
   int n, c;
   cin >> n >> c;
   vector<int> t(n);
   rep(i,n) cin >> t[i];
   int count = 1;
   int a = 0;

   rep(i,n-1){
      if(t[i+1] - t[a] >= c){
         count++;
         a = i+1;
      }
   }
   cout << count << endl;
   return 0;
}
