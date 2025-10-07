#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n;
  cin >> n;
  vector<string> a(n);
  vector<string> b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  
  rep(i,n){
    rep(j,n){
      if(a[i][j] != b[i][j]){
        cout << i+1 << ' ' << j+1 << endl;
        return 0;
      }
    }
  }
  return 0;
}

