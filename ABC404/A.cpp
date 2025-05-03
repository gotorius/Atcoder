#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    string abc = "abcdefghijklmnopqrstuvwxyz";
    for(auto p : abc){
        bool ok = true;
        rep(i,s.size()){
            if(s[i] == p) ok = false;
        }
        if(ok){
            cout << p << endl;
            return 0;
        }
    }
}