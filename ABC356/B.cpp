#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {

  int n, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);

  for(int i=0; i<n; i++){
    a[i] = i+1;
  }

  reverse(a.begin() + (l-1), a.begin() + (r));

  rep(i,n){
    cout << a[i] << endl;
  }
  return 0;
}

