#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
   string s;
   cin >> s;
   if(s =="ACE" || s == "BDF" || s == "CEG" || s == "DFA" || s == "EGB" || s == "FAC" || s == "GBD"){
      cout << "Yes" << endl;
   }else{
      cout <<"No" << endl;
   }
   return 0;
}
