#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    map<int,int> m;
    
    int ans = 0, l = 0, r = 0;
    while(r < n){
        l = r;
        while(r < n && a[r] == a[r+1] && (m.find(a[r]) == m.end())){
            m[a[r]]++;
            r += 2;
            ans = max(ans, r-l);
        }
        m.clear();
        r++;
    }

    cout << ans << endl;
    return 0;
}