#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> w = { {} };
    
    for (int i = 1; i <= n; i++) {
        vector<vector<int>> v;
        for (vector<int> a : w) {
            int start = 0;
            // i == 1 のときは 1 から始める、それ以外は a.back() + 10 から始める
            if (i == 1) {
                start = 1;
            } else {
                start = a.back() + 10;
            }
            
            for (int x = start; x <= m - 10 * (n - i); x++) {
                vector<int> na = a;
                na.push_back(x);
                v.push_back(na);
            }
        }
        swap(v, w);
    }

    int X = w.size();
    cout << X << '\n';
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < n; j++) {
            cout << w[i][j] << " \n"[j == n - 1];
        }
    }
}
