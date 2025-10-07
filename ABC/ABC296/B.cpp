#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<string> s(8), ss(8);
    rep(i,8) cin >> s[i];

    int si, sj;
    rep(i,8){
        rep(j,8){
            if(s[i][j] == '*'){
                si = i;
                sj = j;
            }
        }
    }
    char ans1,ans2;
    ans1 = 'a'+sj;
    ans2 = '8'-si;
    cout << ans1 << ans2 << endl;
    return 0;
}