#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> w = { {} };
	for (int i = 1; i <= n; i++) {
		vector<vector<int>> v;
		for (vector<int> a : w) {
			for (int x = (i == 1 ? 1 : a.back() + 10); x <= m - 10 * (n - i); x++) {
				vector<int> na = a;
				na.push_back(x);
				v.push_back(na);
			}
		}
		swap(v, w);
	}
	int X = w.size();
	cout << X << '\n';
	for (int i = 0; i < X; i++) for (int j = 0; j < n; j++) cout << w[i][j] << " \n"[j == n - 1];
}
