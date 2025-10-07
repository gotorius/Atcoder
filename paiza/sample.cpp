#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;


int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 400 == 0){
            cout << a[i] << " is a leap year" << endl;
            continue;
        }

        if(a[i] % 100 == 0){
            cout << a[i] << " is not a leap year" << endl;
            continue;
        }
        
        if(a[i] % 4 == 0){
            cout << a[i] << " is a leap year" << endl;
            continue;
        }
        cout << a[i] << " is not a leap year" << endl;
    }
    return 0;
}
