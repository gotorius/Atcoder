#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c){
        cout << "Yes" << endl;
        return 0;
    }

    if(a+b == c || a+c == b || b+c == a){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;   
}