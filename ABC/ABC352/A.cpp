#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  if(z <= max(x,y) && z >= min(x,y)){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
}

