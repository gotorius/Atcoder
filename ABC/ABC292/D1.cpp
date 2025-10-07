#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

//ACL
#include <atcoder/all>
using namespace atcoder;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> to(n);
    dsu uf(n);

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        uf.merge(a, b);
        to[a].push_back(b);
        to[b].push_back(a);
    }

    vector<bool> visited(n, false);

    auto dfs = [&](auto&& self, int v, int& count) -> void {
        visited[v] = true;
        for (int u : to[v]) {
            count++;
            if (!visited[u]) self(self, u, count);
        }
    };

    rep(i, n) {
        if (i == uf.leader(i)) {
            int count = 0;
            dfs(dfs, i, count);
            count /= 2;

            if (count != uf.size(i)) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
