#include <bits/stdc++.h>
using namespace std;

int main(void){

  int a, b;
  cin >> a >> b;

  if(a == b){
    cout << 1 << endl;
  }else if((a+b)%2 != 0){
    cout << 2 << endl;
  }else{
    cout << 3 << endl;
  }
  
  return 0;
}