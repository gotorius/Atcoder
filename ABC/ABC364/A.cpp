#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    int h, w;
    int s1, s2;
    
    // 入力
    cin >> h >> w;
    cin >> s1 >> s2;
    
    // 2次元配列の入力
    vector<string> a(h);
    for (i = 0; i < h; i++) {
        cin >> a[i];
    }
    
    // 動きの指示
    string x;
    cin >> x;
    
    s1--;
    s2--;
    
    // 動作の処理
    for (i = 0; i < (int)x.size(); i++) {
        if (x[i] == 'L') {
            if (s2 > 0 && a[s1][s2 - 1] == '.') {  // 左に移動できるかチェック
                s2--;
            }
        } else if (x[i] == 'R') {
            if (s2 < w - 1 && a[s1][s2 + 1] == '.') {  // 右に移動できるかチェック
                s2++;
            }
        } else if (x[i] == 'U') {
            if (s1 > 0 && a[s1 - 1][s2] == '.') {  // 上に移動できるかチェック
                s1--;
            }
        } else if (x[i] == 'D') {
            if (s1 < h - 1 && a[s1 + 1][s2] == '.') {  // 下に移動できるかチェック
                s1++;
            }
        }
    }
    
    // 結果を出力
    cout << s1+1 << " " << s2+1 << endl;
    
    return 0;
}
