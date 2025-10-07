#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;

    if(n%5 == 0){
        cout << n << endl;
    }else if(n%5 == 1){
        cout << n-1 << endl;
    }else if(n%5 == 2){
        cout << n-2 << endl;
    }else if(n%5 == 3){
        cout << n+2 << endl;
    }else{
        cout << n+1 << endl;
    }
    return 0;
}
