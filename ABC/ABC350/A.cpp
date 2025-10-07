#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  string s;
  cin >> s;
  if((s[3] == '0' && s[5] != '0') || s[3] == '1' || s[3] == '2'){
    cout << "Yes" << endl;
    return 0;
  }else if(s[3] == '3'){
    if((s[4] == '1' && s[5] == '6') || s[4] > '4'){
      cout << "No" << endl;
      return 0;
    }else{
      cout << "Yes" << endl;
      return 0;
    }
  }else{
    cout << "No" << endl;
    return 0;
  }
  }

