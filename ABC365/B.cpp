#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);  // 配列サイズをnに設定
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 最大値を求める
    int max_value = *max_element(a.begin(), a.end());
    
    // 二番目に大きい値を探す
    int second_max = INT_MIN;
    int second_max_index = -1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] != max_value && a[i] > second_max) {
            second_max = a[i];
            second_max_index = i;
        }
    }

    // 1-indexedにして出力
    cout << second_max_index + 1 << endl;

    return 0;
}
