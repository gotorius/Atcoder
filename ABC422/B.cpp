#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main(void){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    bool ok = true;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '.') continue;
            int cnt = 0;
            if(i+1 < h)if(s[i+1][j] == '#') cnt++;
            if(j+1 < w)if(s[i][j+1] == '#') cnt++;
            if(i > 0)if(s[i-1][j] == '#') cnt++;
            if(j > 0)if(s[i][j-1] == '#') cnt++;
            if(cnt != 2 && cnt != 4) ok = false;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}