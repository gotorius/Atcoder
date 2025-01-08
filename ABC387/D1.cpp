#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

//TLEanswer

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    int si = -1, sj = -1, gi = -1, gj = -1;

    rep(i, h) {
        cin >> s[i];
        rep(j, w) {
            if (s[i][j] == 'S') {
                si = i;
                sj = j;
            }
            if (s[i][j] == 'G') {
                gi = i;
                gj = j;
            }
        }
    }

    const int INF = 1e8;
    int ans = INF;
    vector<vector<bool>> visited(h, vector<bool>(w, false));

    auto dfs = [&](auto&& dfs, int i, int j, int cnt, int m) -> void {
        if (i < 0 || i >= h || j < 0 || j >= w) return;
        if (s[i][j] == '#' || visited[i][j]) return;
        if (s[i][j] == 'G') {
            ans = min(ans, cnt);
            return;
        }
        visited[i][j] = true;
        if (m == 0) {
            dfs(dfs, i + 1, j, cnt + 1, 1);
            dfs(dfs, i - 1, j, cnt + 1, 1);
        } else {
            dfs(dfs, i, j + 1, cnt + 1, 0);
            dfs(dfs, i, j - 1, cnt + 1, 0);
        }
        visited[i][j] = false;
    };

    dfs(dfs, si, sj, 0, 0);
    dfs(dfs, si, sj, 0, 1);
    cout << (ans != INF ? ans : -1) << endl;
    return 0;
}
