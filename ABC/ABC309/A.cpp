#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b;
    cin >> a >> b;

    if(a%3 == 0){
        if(b == a-1){
            cout << "Yes" << endl;
            return 0;
        }
    }else if(a%3 == 1){
        if(b == a+1 || b == a-1){
            cout << "Yes" << endl;
            return 0;
        }
    }else{
        if(b == a+1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;   
}
