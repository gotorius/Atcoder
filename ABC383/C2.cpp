#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using P = pair<int, int>;

int h, w, d;

// BFSで加湿される床のマスを探索
int bfs(const vector<string>& grid, vector<vector<bool>>& visited, int sx, int sy) {
    queue<pair<P, int>> q; // {位置, 現在の移動距離}
    q.push({{sx, sy}, 0});
    visited[sx][sy] = true; // 初期位置を訪問済みに
    int humidified_count = 1; // 加湿器の位置もカウント

    while (!q.empty()) {
        auto [pos, dist] = q.front();
        q.pop();
        int x = pos.first, y = pos.second;

        if (dist == d) continue; // 移動距離がDを超える場合は終了

        // 上下左右の隣接マスを探索
        for (auto [dx, dy] : vector<P>{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}) {
            int nx = x + dx, ny = y + dy;

            // 境界内かつ訪問していない床マスの場合のみ進む
            if (nx >= 0 && nx < h && ny >= 0 && ny < w && !visited[nx][ny] && grid[nx][ny] == '.') {
                visited[nx][ny] = true; // 訪問済みに設定
                q.push({{nx, ny}, dist + 1}); // 次の位置と距離をキューに追加
                humidified_count++;
            }
        }
    }

    return humidified_count;
}

int main() {
    cin >> h >> w >> d;
    vector<string> grid(h);
    rep(i, h) cin >> grid[i];

    vector<vector<bool>> visited(h, vector<bool>(w, false));
    int total_humidified = 0;

    // 各加湿器の位置から探索
    rep(i, h) {
        rep(j, w) {
            if (grid[i][j] == 'H' && !visited[i][j]) {
                total_humidified += bfs(grid, visited, i, j);
            }
        }
    }

    cout << total_humidified << endl;
    return 0;
}
