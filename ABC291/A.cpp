#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    rep(i,s.size()){
        if(isupper(s[i])){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;   
}