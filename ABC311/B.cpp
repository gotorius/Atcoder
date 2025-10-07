#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
   int n, d;
   cin >> n >> d;
   vector<string> s(n);
   rep(i,n) cin >> s[i];

   int cnt = 0;
   int ans = 0;
   rep(i,d){
      rep(j,n){
         if(s[j][i] != 'o'){
            ans = max(ans, cnt);
            cnt = 0;
            break;
         }
         if(j == n-1 && s[j][i] == 'o'){
            cnt++;
         }
      }
   }
   ans = max(ans, cnt);
   cout << ans << endl;
   return 0;
}