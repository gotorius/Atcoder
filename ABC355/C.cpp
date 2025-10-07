#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n, t;
  cin >> n >> t;
  vector<int> row(n), col(n);
  int dia1 = 0, dia2 = 0;

  rep(ti,t){
    int a;
    cin >> a;
    a--;
    int i = a/n, j = a%n;

    auto add = [&](int& x){
      x++;
      if(x == n){
        cout << ti + 1 << endl;
        exit(0);
      }
    };

    add(row[i]);
    add(col[j]);
    if(i==j) add(dia1);
    if(i+j == n-1) add(dia2);

  }
  cout << -1 << endl;
  return 0;
}


