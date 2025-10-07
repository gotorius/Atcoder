#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;

    rep(i,s.size()){
        if(s[i] == 'N') cout << 'S';
        if(s[i] == 'E') cout << 'W';
        if(s[i] == 'S') cout << 'N';
        if(s[i] == 'W') cout << 'E';
    }
    cout << endl;
    return 0;
   
}