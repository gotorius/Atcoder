#include <bits/stdc++.h>
using namespace std;

int main(void){
  
  int i;
  int ab, bc, ac;
  vector<int> x(3);
  vector<int> y(3);
  
  for(i=0; i<3; i++){
    cin >> x[i] >> y[i];
  }
  
  ab = (x[1]-x[0])*(x[1]-x[0]) +(y[1]-y[0])*(y[1]-y[0]);
  bc = (x[2]-x[1])*(x[2]-x[1]) +(y[2]-y[1])*(y[2]-y[1]);
  ac = (x[2]-x[0])*(x[2]-x[0]) +(y[2]-y[0])*(y[2]-y[0]);
  
  if(ab==bc+ac or bc==ab+ac or ac==ab+bc){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}