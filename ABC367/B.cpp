#include<bits/stdc++.h>
using namespace std;

int main(){
  string x;
  cin >> x;
  while(x.back()=='0'){x.pop_back();}
  if(x.back()=='.'){x.pop_back();}
  cout << x << "\n";
  return 0;
}