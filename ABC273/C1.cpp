#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void) {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    set<int> st;

    // 入力とセットの作成
    rep(i, n) {
        cin >> a[i];
        st.insert(a[i]);
        mp[a[i]]++;
    }

    // setをvectorにコピーして逆順にソート
    vector<int> sorted_st(st.begin(), st.end());
    reverse(sorted_st.begin(), sorted_st.end());

    // 各要素についてのカウントを出力
    for (auto p : sorted_st) {
        cout << mp[p] << endl;
    }

    // 出力する0の数
    rep(i, n - st.size()) {
        cout << 0 << endl;
    }

    return 0;
}
