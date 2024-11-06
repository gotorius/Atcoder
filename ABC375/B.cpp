#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
   int n;
   cin >> n;
   vector<int> x(n);
   vector<int> y(n);
   double a = 0, b = 0;
   double sum = 0;
   rep(i,n) cin >> x[i] >> y[i];

   rep(i,n){
      sum += sqrt((a-x[i])*(a-x[i]) + (b-y[i])*(b-y[i]));
      a = x[i];
      b = y[i];
   }
   sum += sqrt(a*a + b*b);
   cout << fixed << setprecision(10) << sum << endl;

}
