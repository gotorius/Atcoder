#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
   int n, p, q;
   cin >> n >> p >> q;
   vector<int> d(n);
   int m1 = 1001001001;
   rep(i,n){
      cin >> d[i];
      m1 = min(m1, d[i]);
   }
   if(p >= m1+q) cout << m1+q << endl;
   else cout << p << endl;
   return 0;   
}
