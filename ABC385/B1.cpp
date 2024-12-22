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
    for(char dir : t) {
        if (dir == 'L' && y > 0 && s[x][y-1] != '#') {
            y--;
        } else if (dir == 'R' && y+1 < w && s[x][y+1] != '#') {
            y++;
        } else if (dir == 'U' && x > 0 && s[x-1][y] != '#') {
            x--;
        } else if (dir == 'D' && x+1 < h && s[x+1][y] != '#') {
            x++;
        }
        if (s[x][y] == '@') {
            s[x][y] = '.';
            ans++;
        }
    }

    cout << x+1 << ' ' << y+1 << ' ' << ans << endl;
    return 0;
}
