#include <bits/stdc++.h>
using namespace std;
int main() {
  
    int q;
    int i;
    int a,a1,a2;
    int count=0;
    
    cin >> q;
    vector<int> s(1000000);
    
    for(i=0; i<q; i++){
      cin >> a;
      if(a == 1){
        cin >> a1;
        a1--;
        s[a1]++;
        if(s[a1] == 1){
          count++;
        }
      }
      
      else if(a == 2){
        cin >> a2;
        a2--;
        s[a2]--;
        if(s[a2] == 0){
          count--;
        }
      }
      
      else if(a == 3){
        cout << count << endl;
      }
    }
    
    return 0;
    
}