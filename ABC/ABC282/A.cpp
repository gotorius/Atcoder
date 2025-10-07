#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int k;
    cin >> k;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    rep(i,k){
        cout << s[i];
    }
    cout << endl;
    return 0;
   
}