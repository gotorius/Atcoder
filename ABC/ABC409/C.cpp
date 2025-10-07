#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, l;
    cin >> n >> l;
    vector<int> d(n-1);
    rep(i,n-1) cin >> d[i];

    if(l % 3 != 0){
        cout << 0 << endl;
        return 0;
    }

    map<int,int> mp;
    int point = 0;
    rep(i,n){
        mp[point]++;
        point += d[i];
        point %= l;
    }

    ll ans = 0;
    int next = l/3;
    rep(i,l){
       if(mp.find(i) != mp.end() && mp.find((i+next)%l) != mp.end() && mp.find((i+2*next)%l) != mp.end()){
            ans += (ll)mp[i]*mp[(i+next)%l]*mp[(i+2*next)%l];
            mp[i] = 0;
            mp[(i+next)%l] = 0;
            mp[(i+2*next)%l] = 0;
       }
    }
    cout << ans << endl;
    return 0;
}