#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--; y--;

    vector<string> s(h);
    rep(i,h) cin >> s[i];

    string t;
    cin >> t;
    int ans = 0;
    rep(i,t.size()){
        if(t[i] == 'L'){
            if(s[x][y-1] != '#' && y > 0){
                y--;
                if(s[x][y] == '@'){
                    s[x][y] = '.';
                    ans++;
                }
            }
        }else if(t[i] == 'R'){
            if(s[x][y+1] != '#' && y+1 < h){
                y++;
                if(s[x][y] == '@'){
                    s[x][y] = '.';
                    ans++;
                }
            }
        }else if(t[i] == 'U'){
            if(s[x-1][y] != '#' && x > 0){
                x--;
                if(s[x][y] == '@'){
                    s[x][y] = '.';
                    ans++;
                }
            }
        }else if(t[i] == 'D'){
            if(s[x+1][y] != '#' && x+1 < w){
                x++;
                if(s[x][y] == '@'){
                    s[x][y] = '.';
                    ans++;
                }
            }
        }
    }
    cout << x+1 << ' ' <<  y+1 << ' ' << ans << endl;
    return 0;   
}