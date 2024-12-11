#include <bits/stdc++.h>
using namespace std;

int main(void){
  int r, g, b;
  string c;
  cin >> r >> g >> b;
  cin >> c;
  
  if(c == "Red"){
    cout << min(g,b) << endl;
  }
  
  if(c == "Green"){
    cout << min(r,b) << endl;
  }
  
  if(c == "Blue"){
    cout << min(r,g) << endl;
  }
  return 0;
}