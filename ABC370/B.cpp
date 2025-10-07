#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin >> n;

    vector<vector<int>> a(101, vector<int>(101));

    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    int x = 0;

    for(i = 0; i < n; i++) {

        if (x >= i) {
            x = a[x][i];
        } else {
            x = a[i][x];
        }
    }

    cout << x+1 << endl;

    return 0;
}
  