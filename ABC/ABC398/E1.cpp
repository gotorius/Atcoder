#include <bits/stdc++.h>
using namespace std;

bool isBipartite(vector<vector<int>>& graph, int n) {
    vector<int> color(n, -1);  // -1: 未訪問, 0: 白, 1: 黒
    
    for (int start = 0; start < n; start++) {
        if (color[start] != -1) continue;  // すでに訪問済みならスキップ

        queue<int> q;
        q.push(start);
        color[start] = 0;  // 最初のノードを白にする

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            for (int neighbor : graph[node]) {
                if (color[neighbor] == -1) {
                    // 未訪問なら反対の色を塗る
                    color[neighbor] = 1 - color[node];
                    q.push(neighbor);
                } else if (color[neighbor] == color[node]) {
                    // すでに塗られていて同じ色なら二部グラフではない
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;  // 0-indexed にする
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    if (isBipartite(graph, n)) {
        cout << "Yes (Graph is Bipartite)" << endl;
    } else {
        cout << "No (Graph has an Odd Cycle)" << endl;
    }

    return 0;
}
