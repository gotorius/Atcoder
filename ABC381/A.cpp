#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  string s;
  cin >> n >> s;
  
  int a = (n+1)/2;
  
  if(n%2 == 0){
    cout << "No" << endl;
    return 0;
  }
  
  if(n == 1){
    if(s[0] == '/') cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
  }else{
    rep(i,a-1){
      if(s[i] != '1'){
        cout << "No" << endl;
        return 0;
      }
    }
    if(s[a-1] != '/'){
      cout << "No" << endl;
      return 0;
    }
    for(int i=a; i<n; i++){
        if(s[i] != '2'){
          cout << "No" << endl;
          return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
  }
}
  