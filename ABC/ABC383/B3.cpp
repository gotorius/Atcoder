#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>> get_humidified_area(const vector<string>& grid, int x, int y, int d) {
    int h = grid.size(), w = grid[0].size();
    set<pair<int, int>> area;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (abs(i - x) + abs(j - y) <= d && grid[i][j] == '.') {
                area.insert({i, j});
            }
        }
    }
    return area;
}

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> grid(h);
    for (int i = 0; i < h; i++) cin >> grid[i];

    vector<pair<int, int>> floor_cells;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '.') {
                floor_cells.emplace_back(i, j);
            }
        }
    }

    int max_count = 0;

    int n = floor_cells.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int x1 = floor_cells[i].first, y1 = floor_cells[i].second;
            int x2 = floor_cells[j].first, y2 = floor_cells[j].second;
            auto area1 = get_humidified_area(grid, x1, y1, d);
            auto area2 = get_humidified_area(grid, x2, y2, d);
            set<pair<int, int>> combined = area1;
            combined.insert(area2.begin(), area2.end());
            max_count = max(max_count, (int)combined.size());
        }
    }
    cout << max_count << endl;
    return 0;
}
