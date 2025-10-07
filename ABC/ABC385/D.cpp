#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    vector<ll> x(n), y(n);
    map<ll, set<ll>> xpos, ypos;

    rep(i, n) {
        cin >> x[i] >> y[i];
        ypos[x[i]].insert(y[i]);
        xpos[y[i]].insert(x[i]);
    }

    int ans = 0;
    rep(i, m) {
        char d;
        ll c;
        cin >> d >> c;

        if (d == 'U') {
            if (ypos.find(sx) != ypos.end()) {
                auto it = ypos[sx].lower_bound(sy);
                while (it != ypos[sx].end() && *it >= sy && *it < sy + c) {
                    ans++;
                    xpos[*it].erase(sx);
                    it = ypos[sx].erase(it);
                }
            }
            sy += c;
        } else if (d == 'D') {
            if (ypos.find(sx) != ypos.end()) {
                auto it = ypos[sx].lower_bound(sy - c);
                while (it != ypos[sx].end() && *it <= sy && *it > sy - c) {
                    ans++;
                    xpos[*it].erase(sx);
                    it = ypos[sx].erase(it);
                }
            }
            sy -= c;
        } else if (d == 'R') {
            if (xpos.find(sy) != xpos.end()) {
                auto it = xpos[sy].lower_bound(sx);
                while (it != xpos[sy].end() && *it >= sx && *it < sx + c) {
                    ans++;
                    ypos[*it].erase(sy);
                    it = xpos[sy].erase(it);
                }
            }
            sx += c;
        } else if (d == 'L') {
            if (xpos.find(sy) != xpos.end()) {
                auto it = xpos[sy].lower_bound(sx - c);
                while (it != xpos[sy].end() && *it <= sx && *it > sx - c) {
                    ans++;
                    ypos[*it].erase(sy);
                    it = xpos[sy].erase(it);
                }
            }
            sx -= c;
        }
    }
    if(xpos.find(sy) != xpos.end() && ypos.find(sx) != ypos.end()) ans++;

    cout << sx << ' ' << sy << ' ' << ans << endl;
    return 0;
}
