#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    vector<vector<int>> a(n);
    vector<unordered_map<int, double>> mp(n);

    rep(i, n) {
        cin >> k[i];
        a[i].resize(k[i]);
        rep(j, k[i]) {
            cin >> a[i][j];
            mp[i][a[i][j]]++;
        }
    }

    double ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double cnt = 0;
            for (auto p : mp[i]) {
                int num = p.first;
                double cnti = p.second;
                double cntj = mp[j][num];
                double probi = cnti / k[i];
                double probj = cntj / k[j];
                cnt += probi * probj;
            }
            ans = max(ans,cnt);
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
