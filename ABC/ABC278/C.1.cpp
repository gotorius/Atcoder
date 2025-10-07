#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ll n, q;
    cin >> n >> q;
    
    vector<unordered_set<ll>> follow(n);
    rep(i, q) {
        ll t, a, b;
        cin >> t >> a >> b;
        a--; b--;
        if (t == 1) {
            follow[a].insert(b);
        } else if (t == 2) {
            follow[a].erase(b);
        } else if (t == 3) {
            if (follow[a].count(b) && follow[b].count(a)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
