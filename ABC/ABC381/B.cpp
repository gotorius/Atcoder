#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  cin  >> s;
  map<char, int> m;
  
  if(s.size() % 2 == 1){
    cout << "No" << endl;
    return 0;
  }
  
  for(int i=0; i< s.size(); i+=2){
    if(s[i] == s[i+1] && m[s[i]] != 2){
      m[s[i]] = 2;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
  
  