#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> h(n), r(n);
    rep(i, n) h[i] = r[i] = i;

    rep(i, q) {
        int num;
        cin >> num;
        if (num == 1) {
            int a, b;
            cin >> a >> b;
            a--, b--;
            h[a] = b;
        } 
        else if (num == 2) {
            int a, b;
            cin >> a >> b;
            a--, b--;
            swap(r[a], r[b]);
        } 
        else if (num == 3) {
            int a;
            cin >> a;
            a--;
            cout << r[h[a]] + 1 << endl;
        }
    }
    return 0;
}
