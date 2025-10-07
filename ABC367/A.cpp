#include <bits/stdc++.h>
using namespace std;

int main(void){
  int A, B, C;
  cin >> A >> B >> C;
  if(B<C){
    if(A > B && A < C){
      cout << "No" << endl;
    }else{
      cout << "Yes" << endl;
    }
  }else{
    if(A > C && A < B){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}
