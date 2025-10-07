#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    cin >> n >> q;

    multiset<int> mset;
    map<int, int> mp;

    vector<int> a(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        mp[i] = i;
        mset.insert(1);
    }

    rep(i, q) {
        int num;
        cin >> num;
        if (num == 1) {
            int p, h;
            cin >> p >> h;
            
            int prev_pos = mp[p];
            mp[p] = h;

            mset.erase(mset.find(a[prev_pos]));
            a[prev_pos]--;
            mset.insert(a[prev_pos]);

            mset.erase(mset.find(a[h]));
            a[h]++;
            mset.insert(a[h]);

        } else if (num == 2) {
            auto it = mset.lower_bound(2);
            int count = distance(it, mset.end());
            cout << count << endl;
        }
    }

    return 0;
}
