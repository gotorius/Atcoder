#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    rep(i,s.size()){
        char c = toupper(s[i]);
        cout << c;
    }
    cout << endl;
    return 0;
   
}