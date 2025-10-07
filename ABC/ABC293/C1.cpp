#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int H, W;
vector<vector<int>> A;  // マス目の値
vector<vector<bool>> visited;  // 訪問済みマス
set<int> path_values;  // 通った値を記録する集合

int dfs(int i, int j) {
    // 終点 (H-1, W-1) に到達した場合
    if (i == H-1 && j == W-1) {
        return 1;  // 終点到達
    }

    int count = 0;
    visited[i][j] = true;
    path_values.insert(A[i][j]);

    // 右に移動
    if (j + 1 < W && !visited[i][j + 1] && path_values.find(A[i][j + 1]) == path_values.end()) {
        count += dfs(i, j + 1);
    }

    // 下に移動
    if (i + 1 < H && !visited[i + 1][j] && path_values.find(A[i + 1][j]) == path_values.end()) {
        count += dfs(i + 1, j);
    }

    visited[i][j] = false;
    path_values.erase(A[i][j]);
    return count;
}

int main() {
    cin >> H >> W;
    A.resize(H, vector<int>(W));
    visited.resize(H, vector<bool>(W, false));

    // マス目の値を入力
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> A[i][j];
        }
    }

    // DFSで経路を探索
    cout << dfs(0, 0) << endl;

    return 0;
}
