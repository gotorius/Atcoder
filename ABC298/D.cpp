#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    string s = "1";

    rep(i, q) {
        int a;
        cin >> a;

        if (a == 1) {
            char x;
            cin >> x;
            s.push_back(x);
        } else if (a == 2) {
            if (!s.empty()) {
                s.erase(s.begin());
            }
        } else if (a == 3) {
            ll y = stoll(s);
            y = y % 998244353;
            cout << y << endl;
        }
    }
    return 0;
}
