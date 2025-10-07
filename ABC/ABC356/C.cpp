#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {

  int n, m, r;
  cin >> n >> m;
  vector<int> a(m);
  vector<int> sum(m);
  vector<vector<int>> x(n, vector<int> (m));
  rep(i,m) cin >> a[i];
  rep(i,n) rep(j,m) cin >> x[i][j];

  rep(j,m) rep(i,n) sum[j] += x[i][j];

  rep(j,m){
    if(a[j] > sum[j]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}

