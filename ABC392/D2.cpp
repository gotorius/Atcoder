#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
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
            if (mp[i].size() <= mp[j].size()) {
                for (auto &p : mp[i]) {
                    int num = p.first;
                    double probi = p.second / k[i];
                    if (mp[j].find(num) == mp[j].end()) continue;
                    double probj = mp[j][num] / k[j];
                    cnt += probi * probj;
                }
            } else {
                for (auto &p : mp[j]) {
                    int num = p.first;
                    double probj = p.second / k[j];
                    if (mp[i].find(num) == mp[i].end()) continue;
                    double probi = mp[i][num] / k[i];
                    cnt += probi * probj;
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}
