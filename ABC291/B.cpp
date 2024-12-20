#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
     int n;
     cin >> n;
     vector<int> x(5*n);

     double ans = 0;
     rep(i,5*n) cin >> x[i];
     sort(x.begin(), x.end());

     for(int i=n; i<4*n; i++){
        ans += x[i];
     }
     ans /= (3*n);
     printf("%.10f\n", ans);
     return 0;

}