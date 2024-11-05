#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    vector<string> sc(h);
    rep(i,h) cin >> s[i];
    sc = s;

    auto f = [&](int x, int y) {
        if(x-1>=0 && y-1>=0 && s[x-1][y-1] == '.'){
            x--, y--;
            s[x][y] = '#';
        }
    };

    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#') continue;

        }
    }
   
}
