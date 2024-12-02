#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int i, n;
    cin >> n;
    
    vector<string> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(i=0; i<n-2; i++){
      if(a[i] == "sweet" && a[i+1] == "sweet" ){
        cout << "No" << endl;
        return 0;
      }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}
