#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(void){
   int n, q, ss=0;
   cin >> n >> q;
   string s;
   cin >> s;
   vector<int> l(q);
   vector<int> r(q);
   vector<int> sum(n,0);
   rep(i,q) cin >> l[i] >> r[i];

   for(int i=1; i<s.size(); i++){
      if(s[i] == s[i-1]){
         ss++;
         sum[i] = ss;
      }else{
         sum[i] = ss;
      }
   }

   rep(i,q){
      int ans = sum[r[i]-1] - sum[l[i]-1];
      cout << ans << endl;
   }
   return 0;
}
