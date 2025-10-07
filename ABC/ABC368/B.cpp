#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n,i;
    int count=0;
    cin >> n;


    vector<int> a(n);
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    
    while(true){
      sort(a.begin(), a.end(), greater());
      
      if(a[0] == 0 or a[1] == 0){
        break;
      }
      a[0] -= 1;
      a[1] -= 1;
      count++;
    }
    cout << count << endl;
    
    return 0;
}