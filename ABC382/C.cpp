#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    map<int,int> ma;
    rep(i, n) {
        cin >> a[i];
        if(ma.find(a[i]) == ma.end()) ma[a[i]] = i+1;
        else if(ma[a[i]] > i+1) ma[a[i]] = i+1;
    }
    
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    rep(i, m) {
        auto c = upper_bound(a.begin(), a.end(), b[i]);
        if (c == a.begin()) {
            cout << -1 << endl;
        } else {
            c--;
            while(c != a.begin() && b[i] == *c) c--;
            cout << ma[*c] << endl;
        }
    }
    return 0;
}
