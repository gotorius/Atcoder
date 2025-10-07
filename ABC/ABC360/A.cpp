#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(void){
  string s;
  for(int i=0; i<3; i++){
    cin >> s[i];    
  }
  if(s[0] == 'R' || (s[1]=='R' && s[2]=='M')){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}