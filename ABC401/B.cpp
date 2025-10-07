#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    bool ok = false;
    int ans = 0;
    rep(i,n){
        if(s[i] == "login") ok = true;
        else if(s[i] == "logout") ok = false;
        if(!ok && s[i] == "private") ans++;
    }
    cout << ans << endl;
    return 0;
}