#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int f(int x, int y, vector<string> z){
   rep(i,8){
      if(z[x][i] == '#'){
         return 0;
      }
   }
   rep(j,8){
      if(z[j][y] == '#'){
         return 0;
      }
   }
   return 1;
}

int main() {
   vector<string> s(8);
   rep(i,8) cin >> s[i];

   int ans = 0;
   rep(i,8){
      rep(j,8){
         if(f(i,j,s)) ans++;
      }
   }
   cout << ans << endl;
   return 0;
   
}