#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; // 頂点数 n と 辺の数 m
    cin >> n >> m;

    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // 無向グラフの場合
    }

    vector<bool> visited(n, false); // 訪問状態を管理する配列

    // BFSを関数として定義
    auto bfs = [&](int start) {
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << "訪問: " << node << endl;

            for (int next : graph[node]) {
                if (!visited[next]) {
                    visited[next] = true;
                    q.push(next);
                }
            }
        }
    };

    // 未訪問の各ノードから探索
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bfs(i);
        }
    }

    return 0;
}
