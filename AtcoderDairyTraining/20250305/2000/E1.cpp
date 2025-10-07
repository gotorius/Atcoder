#include <bits/stdc++.h>
using namespace std;
#define rep(i,b,n) for(int i = b; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int dist2(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}


bool isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int d2[6];
    d2[0] = dist2(x1, y1, x2, y2);
    d2[1] = dist2(x1, y1, x3, y3);
    d2[2] = dist2(x1, y1, x4, y4);
    d2[3] = dist2(x2, y2, x3, y3);
    d2[4] = dist2(x2, y2, x4, y4);
    d2[5] = dist2(x3, y3, x4, y4);

    sort(d2, d2 + 6);
    return (d2[0] > 0 &&
            d2[0] == d2[1] && d2[1] == d2[2] && d2[2] == d2[3] &&
            d2[4] == d2[5] &&
            d2[4] == 2 * d2[0]);
}

int main(void) {
    vector<string> s(9);
    rep(i,0,9) cin >> s[i];
    int ans = 0;

    rep(a,0,81) rep(b,a + 1,81) rep(c,b + 1,81) rep(d,c + 1,81) {
        int x1 = a / 9, y1 = a % 9;
        int x2 = b / 9, y2 = b % 9;
        int x3 = c / 9, y3 = c % 9;
        int x4 = d / 9, y4 = d % 9;

        if (s[x1][y1] == '#' && s[x2][y2] == '#' && s[x3][y3] == '#' && s[x4][y4] == '#') {
            if (isSquare(x1, y1, x2, y2, x3, y3, x4, y4)) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}