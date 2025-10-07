#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l = 0;
	int a[200000];  // ボールの大きさを格納する配列
	cin >> n;  // ボールの数を入力

	// ボールの操作
	for (int i = 0; i < n; i++) {
		cin >> a[l];  // ボールの大きさを格納
		l++;  // 列にボールを追加
		
		// 直前の2つのボールが同じ大きさなら合体
		while (l > 1) {
			if (a[l - 2] == a[l - 1]) {
				a[l - 2]++;  // 合体して1つ大きくなる
				l--;  // ボールの数が減る
			} else {
				break;  // 異なる大きさの場合は終了
			}
		}
	}

	// 最終的に残ったボールの数を出力
	cout << l << endl;

	return 0;
}
