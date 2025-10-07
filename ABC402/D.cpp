#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> cnt(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        cnt[(a + b) % n]++;
    }
    ll ans = (ll)m * (m - 1) / 2;
    for (auto e : cnt) {
        ans -= e * (e - 1) / 2;
    }

    //このループは、平行な直線の組を数えて、それを全体の組数から引いています。
    //e は、ある傾きに属する直線の本数（たとえば cnt[3] = 5 なら、傾き3の直線が5本ある）。
    //その中から2本選ぶと、平行な直線の組がe * (e - 1) / 2;
    //それを ans から引いている。
    
    cout << ans << endl;
}
