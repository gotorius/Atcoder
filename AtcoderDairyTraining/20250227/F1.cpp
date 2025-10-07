#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    rep(i, n) cin >> a[i];

    for (int start = 0; start < k; start++) {

        vector<int> sub;
        for (int i = start; i < n; i += k) {
            sub.push_back(a[i]);
        }
        
        sort(sub.begin(), sub.end());
        int idx = 0;
        for (int i = start; i < n; i += k) {
            a[i] = sub[idx++];
        }
    }

    if (is_sorted(a.begin(), a.end())) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
