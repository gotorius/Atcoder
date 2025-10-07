#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  
  int count = 0;
  int i, n, t, p;
  int a = 0;
  cin >> n >> t >> p;
  vector<int> L(n);
  for(i=0; i<n; i++){
    cin >> L[i];
  }
  
  
  while(p > count){
    count = 0;
    for(i=0; i<n; i++){
      if(t <= L[i]){
        count++;
      }
      L[i]++;
    }
    a++;
  }
  
  cout << a-1 << endl;

  return 0;
}
