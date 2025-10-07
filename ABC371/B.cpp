#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n, m;
  cin >> n >> m;
  vector<char> x(1000);
  vector<int> a(1000);
  vector<char> b(1000);
  rep(i,m) cin >> a[i] >> b[i];
  rep(i,1000) x[i] = 'F';
  rep(i,m){
    if(b[i] == 'F' && x[a[i]] == 'F'){
      cout << "No" << endl;
    }else if(b[i] == 'F' && x[a[i]] == 'M'){
      cout << "No" << endl;
    }else if(b[i] == 'M' && x[a[i]] == 'F'){
      cout << "Yes" << endl;
      x[a[i]] = b[i];
    }else if(b[i] == 'M' && x[a[i]] == 'M'){
      cout << "No" << endl;
    }
  }
  return 0;
}

