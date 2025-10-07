#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    vector<int> d;
    rep(i, n) {
        if (s[i] == '1') d.push_back(i);
    }
    
    int ds = d.size();
    if (ds == 0) { 
        cout << 0 << endl;
        return 0;
    }

    int median = d[ds / 2];
    if (ds % 2 == 0) {
        median = (d[ds / 2 - 1] + d[ds / 2]) / 2;
    }

    ll ans = 0;
    for (int i = 0; i < ds; i++) {
        ans += abs(d[i] - (median - (ds / 2 - i)));
    }

    cout << ans << endl;
    return 0;
}
