#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  string s;
  cin >> s;
  rep(i,s.size()-1){
    if(s[i] != s[i+1]){
      if(s[1] == s[2] && s[0] != s[1]){
        cout << i+1 << endl;
        return 0;
      }else{
        cout << i+2 << endl;
        return 0;
      }
    }
  }
}
