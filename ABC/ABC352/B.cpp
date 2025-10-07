#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int a = 0;
  string s, t;
  cin >> s >> t;
  rep(i, (int)t.size()){
    if(s[a] == t[i]){
      a++;
      cout << i+1 << endl;
    }
  }
  return 0;
}

