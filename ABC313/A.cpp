#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
   int n;
   cin >> n;
   vector<int> a(n);

   int ma = 0;
   cin >> a[0];
   rep(i,n-1){
      cin >> a[i+1];
      ma = max(a[i+1], ma);
   }
   if(a[0] <= ma){
      cout << ma - a[0] + 1 << endl;
   }else{
      cout << 0 << endl;
   }
   return 0;
}
