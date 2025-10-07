#include <bits/stdc++.h>

using namespace std;

int num_move(int n, int from, int to, int ng) {
    if (from > to) swap(from, to);
    if (from < ng and ng < to) {
        return n + from - to;
    } else {
        return to - from;
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    int l = 1, r = 2;
    int ans = 0;
    for (int i = 0; i < q; i++) {
        char h;
        int t;
        cin >> h >> t;
        if (h == 'L') {
            ans += num_move(n, l, t, r);
            l = t;
        } else {
            ans += num_move(n, r, t, l);
            r = t;
        }
    }
    cout << ans << endl;
}
