#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<int> rowCount(n, 0), colCount(n, 0);
    rep(i, n) {
        rep(j, n) {
            if (s[i][j] == 'o') {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }

    ll ans = 0;
    rep(i, n) {
        rep(j, n) {
            if (s[i][j] == 'o') {
                ans += (rowCount[i] - 1) * (colCount[j] - 1);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
