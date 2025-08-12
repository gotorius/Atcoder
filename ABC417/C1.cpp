#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    map<int,int> mp;
    ll ans = 0;
    rep(i,n){
        int a;
        cin >> a;
        ans += mp[i-a];
        mp[i+a]++;
    }
    cout << ans << endl;
    return 0;    
}
