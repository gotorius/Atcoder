#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {

  int n;
  cin >> n;

  vector<string> s = {"#"};

  rep(i,n){
    int m = s.size();
    int m3 = 3*m;
    vector<string> t(m3, string(m3,'.'));
    rep(i, m3){
      rep(j, m3){
        t[i][j] = s[i%m][j%m];
      }
    }
    rep(i,m){
      rep(j,m){
        t[m+i][m+j] = '.';
      }
    }
    s = t;
  }
  rep(i,s.size()) cout << s[i] << endl;

}

