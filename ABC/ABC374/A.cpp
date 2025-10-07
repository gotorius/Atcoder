#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(void){
  string s;
  cin >> s;
  if(s[s.size()-3] == 's'){
    if(s[s.size()-2] == 'a'){
      if(s[s.size()-1] == 'n'){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}