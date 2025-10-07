#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    map<P, int> mp;
    
    int ans = 0;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        
        if (a == b) {
            ans++;
            continue;
        }
        
        if (mp[{a, b}] > 0 || mp[{b, a}] > 0) {
            ans++;
        }
        mp[{a, b}]++;
        mp[{b, a}]++;
    }
    
    cout << ans << endl;
}
