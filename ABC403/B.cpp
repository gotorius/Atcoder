#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    string s, t;
    cin >> s >> t;
    rep(i,s.size()-t.size()+1){
        bool ok = true;
        rep(j,t.size()){
            if(s[i+j] != t[j] && s[i+j] != '?'){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
