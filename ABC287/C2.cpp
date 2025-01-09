#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

// 深さ優先探索 (DFS) で連結性を確認
void dfs(int v, vector<vector<int>>& g, vector<bool>& visited) {
    visited[v] = true;
    for (int next : g[v]) {
        if (!visited[next]) {
            dfs(next, g, visited);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i, m) {
        int u, v;
        cin >> u >> v;
        u--; v--; // 0-based に変換
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // 連結性確認のためのDFS
    vector<bool> visited(n, false);
    dfs(0, g, visited);

    // すべての頂点が訪問済みか確認
    if (find(visited.begin(), visited.end(), false) != visited.end()) {
        cout << "No" << endl;
        return 0;
    }

    // 頂点の次数を確認
    int l1 = 0; // 次数が1の頂点数
    int l2 = 0; // 次数が2の頂点数
    rep(i, n) {
        if (g[i].size() == 2) {
            l2++;
        } else if (g[i].size() == 1) {
            l1++;
        }
    }

    // パスグラフの条件を確認
    if (l2 == n - 2 && l1 == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
