#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;

    multiset<int> st;
    map<int, int> mp;

    // 初期化
    rep(i, n) {
        mp[i] = i;
        st.insert(1);
    }

    rep(i, q) {
        int num;
        cin >> num;
        if (num == 1) {
            int p, h;
            cin >> p >> h;

            int prev_h = mp[p];
            mp[p] = h;

            
        } else if (num == 2) {
            auto it = st.lower_bound(2); // 2以上の最初の要素
            int count = distance(it, st.end()); // それ以降の要素数をカウント
            cout << count << endl;
        }
    }

    return 0;
}
