#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main() {
    int n;
    cin >> n;

    dsu d(2*n);
    map<string, int> mp;
    int id = 0;

    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;

        if (mp.find(s) == mp.end()) {
            mp[s] = id++;
        }

        if (mp.find(t) == mp.end()) {
            mp[t] = id++;
        }

        int sid = mp[s];
        int tid = mp[t];
        if (d.same(sid, tid)) {
            cout << "No" << endl;
            return 0;
        }
        d.merge(sid, tid);
    }

    cout << "Yes" << endl;
    return 0;
}
