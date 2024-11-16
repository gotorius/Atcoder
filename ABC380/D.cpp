#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


char flip(char c) {
    if ('a' <= c && c <= 'z') {
        return (c - 'a') + 'A';
    } else {
        return (c - 'A') + 'a';
    }
}

int main() {
    string s;
    cin >> s; // 初期文字列
    int q;
    cin >> q; // 質問数

    while (q--) {
        long long k;
        cin >> k;
        k--; // 0始まりに変換

        ll blk = k / s.size(); // ブロック番号
        ll pt = k % s.size();  // ブロック内での位置

        // ブロック番号に含まれる1の数が偶数か奇数かで結果を決定
        if (__builtin_popcountll(blk) % 2 == 1) {
            cout << flip(s[pt]); // 大小文字を反転
        } else {
            cout << s[pt]; // そのまま
        }
    }

    cout << endl;
    return 0;
}

