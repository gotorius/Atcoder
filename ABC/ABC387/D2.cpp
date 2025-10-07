#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

void bfs(int start, vector<string> graph) {
    int n = graph.size();  // 頂点数
    vector<int> distance(n, -1);  // 最短距離を格納（-1 は未訪問を示す）

    queue<int> q;  // BFS 用のキュー
    distance[start] = 0;  // 自分自身の距離は 0
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current]) {
            if (distance[neighbor] == -1) {  // 未訪問なら処理
                distance[neighbor] = distance[current] + 1;
                q.push(neighbor);
            }
        }
    }

    // 結果の出力
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << ": Distance = " << distance[i] << endl;
    }
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    } 

}
