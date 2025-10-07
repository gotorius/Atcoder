#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  string s;
  cin >> s;
  rep(i,(int)s.size()){
    if(s[i] != '.'){
      cout << s[i];
    }
  }
  return 0;
}