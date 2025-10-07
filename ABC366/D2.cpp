#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<vector<vector<int>>> a(n, vector<vector<int>>(n, vector<int>(n)));
    rep(i,n) rep(j,n) rep(k,n) cin >> a[i][j][k];
    vector<vector<vector<int>>> s(n + 1, vector<vector<int>>(n + 2, vector<int>(n + 2, 0)));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                s[i][j][k] = a[i - 1][j - 1][k - 1]
                           + s[i - 1][j][k]
                           + s[i][j - 1][k]
                           + s[i][j][k - 1]
                           - s[i - 1][j - 1][k]
                           - s[i - 1][j][k - 1]
                           - s[i][j - 1][k - 1]
                           + s[i - 1][j - 1][k - 1];
            }
        }
    }
    

    int q;
    cin >> q;

    rep(qi, q) {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--, ly--, lz--;
        int ans = s[rx][ry][rz]
                - s[lx][ry][rz]
                - s[rx][ly][rz]
                - s[rx][ry][lz]
                + s[lx][ly][rz]
                + s[lx][ry][lz]
                + s[rx][ly][lz]
                - s[lx][ly][lz];

        cout << ans << endl;
    }
    return 0;
}
