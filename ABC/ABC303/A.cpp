#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;
    rep(i,n){
        if(s[i] == t[i]) continue;
        if(s[i] == 'l' && t[i] == '1' || s[i] == '1' && t[i] == 'l') continue;
        if(s[i] == '0' && t[i] == 'o' || s[i] == 'o' && t[i] == '0') continue;
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;   
}
