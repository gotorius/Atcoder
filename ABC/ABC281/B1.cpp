#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    // 長さが8でなければ即座にNoを出力
    if (S.size() != 8) {
        cout << "No" << endl;
        return 0;
    }

    // 1文字目と最後の文字が大文字かチェック
    if (!isupper(S[0]) || !isupper(S[7])) {
        cout << "No" << endl;
        return 0;
    }

    // 中央の6文字が数字か確認
    string middle = S.substr(1, 6);
    for (char c : middle) {
        if (!isdigit(c)) {
            cout << "No" << endl;
            return 0;
        }
    }

    // 中央6文字を整数に変換して範囲内かチェック
    int num = stoi(middle);
    if (num < 100000 || num > 999999) {
        cout << "No" << endl;
        return 0;
    }

    // 全ての条件を満たす場合
    cout << "Yes" << endl;
    return 0;
}
