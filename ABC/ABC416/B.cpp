#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s;
    cin >> s;
    string ans = s;
    bool ok = true;
    rep(i,s.size()){
        if(ok && s[i] == '.'){
            ans[i] = 'o';
            ok = false;
        }else if(s[i] == '#'){
            ans[i] = '#';
            ok = true;
        }else{
            ans[i] = '.';
        }
    }
    cout << ans << endl;
    return 0;
}