#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool now = false;
    rep(i,n){
        if(s[i] == '"'){
            if(now) now = false;
            else now = true;
        }else if(s[i] == ','){
            if(now) continue;
            else s[i] = '.';
        }
    }
    cout << s << endl;
    return 0;

}