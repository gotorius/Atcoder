#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
   int n;
   string s;
   cin >> n >> s;
   int count=0;
   rep(i,n-2){
      if(s[i] == '#' && s[i+1] == '.' && s[i+2] == '#'){
         count++;
      }
   }
   cout << count << endl;
   return 0;
}
