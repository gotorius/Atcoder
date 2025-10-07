#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int count = 0;
  string s, t;
  cin >> s >> t;
  for(int i=0; i<s.size(); i++){
    if(toupper(s[i]) == t[count]){
      count++;
      if(count == 3 || (count == 2 && t[2] == 'X')){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
