#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    vector<vector<bool>> ok(h, vector<bool>(w, true));
    rep(i,h) cin >> s[i];

    int nowi = 0, nowj = 0;
    while(nowi < h && nowj < w && nowi >= 0 && nowj >= 0){
        if(ok[nowi][nowj] == false){
            cout << -1 << endl;
            return 0;
        }else ok[nowi][nowj] = false;
        if(s[nowi][nowj] == 'L') nowj--;
        else if(s[nowi][nowj] == 'R') nowj++;
        else if(s[nowi][nowj] == 'U') nowi--;
        else if(s[nowi][nowj] == 'D') nowi++;
    }
    if(nowi < 0) cout << nowi+2 << " " << nowj+1 << endl;
    else if(nowj < 0) cout << nowi+1 << " " << nowj+2 << endl;
    else if(nowi >= h) cout << nowi << " " << nowj+1 << endl;
    else if(nowj >= w) cout << nowi+1 << " " << nowj << endl;
    return 0;

}