#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int ans = 0;
    rep(i,n){
        auto x = lower_bound(a.begin(), a.end(), a[i]*2);
        ans += (int)distance(x, a.end());
    }
    cout << ans << endl;
    return 0;
   
}