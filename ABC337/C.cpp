#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n,now;
  cin >> n;
  map<int, int> pos;
  vector<int> a(n);

  rep(i,n){
    cin >> a[i];
    pos[a[i]] = i;
    if(a[i] == -1){
      now = i;
    }
  }

  rep(i,n){
    cout << now+1 << ' ';
    now = pos[now+1];
  }
  cout << endl;
  return 0;
}