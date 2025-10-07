#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> m;

    rep(i, n) {
        cin >> a[i];
        m[a[i]] = i;
    }

    int cnt = 0;
    vector<int> ans1;
    vector<int> ans2;

    rep(i, n) {
        if (a[i] != i + 1) {
            int swap_idx = m[i + 1];
            swap(a[i], a[swap_idx]);

            cnt++;
            ans1.push_back(i + 1);
            ans2.push_back(swap_idx + 1);

            m[a[swap_idx]] = swap_idx;
            m[a[i]] = i;
        }
    }

    cout << cnt << endl;
    rep(i, ans1.size()) {
        cout << ans1[i] << ' ' << ans2[i] << endl;
    }
    return 0;
}
