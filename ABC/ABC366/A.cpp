#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  int T;
  int A;
  
  cin >> N;
  cin >> T;
  cin >> A;
  
  if(N < 2*T || N < 2*A){
    cout << "Yes" << endl;
   }
  else{
    cout << "No" << endl;
  }
  return 0;
}
