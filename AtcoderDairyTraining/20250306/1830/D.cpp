#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s = "abcdefghijklmnopqrstuvwxyz";
    rep(i,26){
        int p;
        cin >> p;
        cout << s[p-1];
    }
    cout << endl;
    return 0;

}