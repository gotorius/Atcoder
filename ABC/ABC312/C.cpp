#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
   int n, m;
   cin >> n >> m;
   vector<ll> a(n), b(m);
   rep(i,n) cin >> a[i];
   rep(i,m) cin >> b[i];
   vector<P> events;
   rep(i,n) events.push_back(P(a[i], 0)); 
   rep(i,m) events.push_back(P(b[i]+1, 1)); 
   sort(events.begin(), events.end());
   int na = 0, nb = m;
   for(auto [p,type] : events){
      if(type == 0) na++; else nb--;
      if(na >= nb){
         cout << p << endl;
         return 0;
      }
   }
   return 0;
}
