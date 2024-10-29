#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<ll,ll>;

int main() {
   ll n, m;
   cin >> n >> m;
   vector<ll> a(m), b(m);
   map<P,ll> cnt;
   rep(i,m){
      cin >> a[i] >> b[i];
      P r = make_pair(a[i],b[i]);

      if(a[i]+2 <= n && b[i]+1 <= n){
         P r1 = make_pair(a[i]+2,b[i]+1);
         cnt[r1]++;
      }

      if(a[i]+1 <= n && b[i]+2 <= n){
         P r2 = make_pair(a[i]+1,b[i]+2);
         cnt[r2]++;
      }

      if(a[i]-2 >= 1 && b[i]+1 <= n){
         P r3 = make_pair(a[i]-2,b[i]+1);
         cnt[r3]++;
      }

      if(a[i]-1 >= 1 && b[i]+2 <= n){
         P r4 = make_pair(a[i]-1,b[i]+2);
         cnt[r4]++;
      }

      if(a[i]-2 >= 1 && b[i]-1 >= 1){
         P r5 = make_pair(a[i]-2,b[i]-1);
         cnt[r5]++;
      }

      if(a[i]-1 >= 1 && b[i]-2 >= 1){
         P r6 = make_pair(a[i]-1,b[i]-2);
         cnt[r6]++;
      }

      if(a[i]+1 <= n && b[i]-2 >= 1){
         P r7 = make_pair(a[i]+1,b[i]-2);
         cnt[r7]++;
      }

      if(a[i]+2 <= n && b[i]-1 >= 1){
         P r8 = make_pair(a[i]+2,b[i]-1);
         cnt[r8]++;
      }

      cnt[r]++;
   }
   ll ans = n*n-(cnt.size());
   cout << ans << endl;
   return 0;
}
