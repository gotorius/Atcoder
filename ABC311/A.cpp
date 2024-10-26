#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
   int a = 0 ,b = 0, c = 0, n;
   string s;
   cin >> n >> s;
   rep(i,n){
      if(s[i] == 'A') a++;
      if(s[i] == 'B') b++;
      if(s[i] == 'C') c++;
      if(a * b * c >= 1){
         cout << i+1 << endl;
         return 0;
      }
   }
   return 0;
}
