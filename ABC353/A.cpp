#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i,n) cin >> h[i];
  rep(i,n-1){
    if(h[0] < h[i+1]){
      cout << i+2 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}



