#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    if(n < 1e3){
        cout << n << endl;
    }else if(n >= 1e3 && n < 1e4){
        cout << n-(n%10) << endl;
    }else if(n >= 1e4 && n < 1e5){
        cout << n-(n%100) << endl;
    }else if(n >= 1e5 && n < 1e6){
        cout << n-(n%1000) << endl;
    }else if(n >= 1e6 && n < 1e7){
        cout << n-(n%10000) << endl;
    }else if(n >= 1e7 && n < 1e8){
        cout << n-(n%100000) << endl;
    }else if(n >= 1e8 && n < 1e9){
        cout << n-(n%1000000) << endl;
    }
    return 0;
}
