#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;


int main(void){
  string s;
  string t;
  cin >> s >> t;
  int size = max(t.size(), s.size());
  rep(i, size){
    if(s[i] != t[i]){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}