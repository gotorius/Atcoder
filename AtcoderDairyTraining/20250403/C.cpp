#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    vector<string> s(3);
    rep(i,3) cin >> s[i];
    string t;
    cin >> t;

    rep(i,t.size()){
        if(t[i] == '1') cout << s[0];
        else if(t[i] == '2') cout << s[1];
        else cout << s[2];
    }
    cout << endl;
    return 0;
}