#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    if(n%2 == 0){
        rep(i,n/2-1) cout << '-';
        cout << "==";
        rep(i,n/2-1) cout << '-';
        cout << endl;
    }else{
        rep(i,n/2) cout << '-';
        cout << "=";
        rep(i,n/2) cout << '-';
        cout << endl;
    }

}