#include <bits/stdc++.h>
using namespace std;


int main(void){

  int i;
  vector<int> a(6);
  vector<int> b(6);

  for(i=0; i<6; i++){
    cin >> a[i];
  }

  for(i=0; i<6; i++){
    cin >> b[i];
  }

  if(max(a[0],a[3]) > min(b[0],b[3]) && min(a[0],a[3]) < max(b[0],b[3])){
    if(max(a[1],a[4]) > min(b[1],b[4]) && min(a[1],a[4]) < max(b[1],b[4])){
        if(max(a[2],a[5]) > min(b[2],b[5]) && min(a[2],a[5]) < max(b[2],b[5])){
          cout << "Yes" << endl;
          return 0;
        }
    }
  }

  cout << "No" << endl;

  return 0;
}