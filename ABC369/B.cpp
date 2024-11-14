#include <bits/stdc++.h>
using namespace std;

int main(void){

  int i, n;
  cin >> n;
  int dis=0;
  int l=-1, r=-1;


  for(i=0; i<n; i++){
    int a; char s;
    cin >> a >> s;
    if(s == 'L'){
      if(l != -1){
        dis += abs(a - l);
        l = a;
      }else{
        l = a;
      }
    }else{
      if(r != -1){
        dis += abs(a - r);
        r = a;
      }else{
        r = a;
      }
    }
  }
  cout << dis <<endl;
  return 0;
}