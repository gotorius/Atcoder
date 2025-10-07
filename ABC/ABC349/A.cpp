#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n, sum=0;
  cin >> n;
  vector<int> a(n);
  rep(i,n-1){
    cin >> a[i];
    sum += a[i];
  }
  cout << -sum << endl;
  return 0;
  
}


