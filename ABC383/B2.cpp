#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int count_marks(const vector<string>& grid, vector<string>& temp_grid, int x, int y, int d) {
    int h = grid.size(), w = grid[0].size();
    int count = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (abs(i - x) + abs(j - y) <= d && temp_grid[i][j] == '.') {
                temp_grid[i][j] = 'x';
                count++;
            }
        }
    }
    return count;
}

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> grid(h);
    rep(i, h) cin >> grid[i];

    int max_count = 0;
    rep(i, h) {
        rep(j, w) {
            if (grid[i][j] == '.') {
                vector<string> temp_grid = grid;
                int first_mark_count = count_marks(grid, temp_grid, i, j, d);
                rep(x, h) {
                    rep(y, w) {
                        if (temp_grid[x][y] == '.') {
                            vector<string> temp_grid2 = temp_grid;
                            int second_mark_count = count_marks(grid, temp_grid2, x, y, d);
                            max_count = max(max_count, first_mark_count + second_mark_count);
                        }
                    }
                }
                max_count = max(max_count, first_mark_count);
            }
        }
    }

    cout << max_count << endl;
    return 0;
}
