#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
	int n;
	cin >> n;
	vector<vector<char>> a(n, vector<char>(n));
	rep(i, n) rep(j, n) cin >> a[i][j];
	vector<vector<char>> ans(n, vector<char>(n));
	rep(i, n) rep(j, n) {
		int d = min({ i + 1, j + 1, n - i, n - j });
		int ni = i, nj = j;
		rep(_, d % 4) {
			int ti = nj, tj = n - 1 - ni;
			ni = ti, nj = tj;
		}
		ans[ni][nj] = a[i][j];
	}
	rep(i, n) {
		rep(j, n) {
			cout << ans[i][j];
		}
		cout << '\n';
	}
}
