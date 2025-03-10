#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  string s;
  cin >> s;
  int x = 0;
  while(s[x] == 'A'){
    x++;
  }
  while(s[x] == 'B'){
    x++;
  }
  while(s[x] == 'C'){
    x++;
  }
  if(x == s.size()){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}