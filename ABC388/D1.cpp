#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b;
    rep(i, n) cin >> a[i];

    // a[i] の調整と負の値の保存
    rep(i, n) {
        a[i] += i;
        a[i] -= (n - i - 1);
        if (a[i] < 0) b.push_back(-a[i]);
    }

    // 結果出力（調整後の a[i]）
    rep(i, n) cout << a[i] << " ";
    cout << endl;

    // 負の値を格納した b をソートしてから queue に格納
    sort(b.begin(), b.end());
    queue<int> q;
    rep(i, b.size()) q.push(b[i]);

    // queue を使って a[i] を調整
    int idx = 0;
    rep(i, n) {
        // a[i] が負のときに queue の値を使って調整
        while (!q.empty() && a[i] < 0) {
            a[i] += q.front();  // queue の先頭を加算
            q.pop();  // 加算した値を取り出す
        }
        if (a[i] < 0) a[i] = 0;  // 負の値が残っていれば 0 にする
    }

    // 結果を出力（最終的な a[i]）
    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
