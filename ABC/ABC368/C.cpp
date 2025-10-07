#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void){
  int n;
  ll t=0, sum=0;
  cin >> n;
  vector<ll> h(n);
  rep(i,n){
    cin >> h[i];
  }
  rep(i,n){
    int x = h[i]/5;
    t += x*3;
    h[i] -= x*5;
    while(h[i] > 0){
      t++;
      if(t%3 == 0){
        h[i] -= 3;
      }else{
        h[i]--;
      }
    }
  }
  cout << t << endl;
}


