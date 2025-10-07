#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    rep(i,n){
        cin >> a[i];
        mp[a[i]] = i;
    }

    int ans = 0;
    vector<P> p;
    rep(i,n){
        if(a[i] != i+1){
            int b = a[i];
            p.push_back({i+1, mp[i+1]+1});
            swap(a[i], a[mp[i+1]]);
            ans++;
            mp[b] = mp[i+1];
            mp[i+1] = i+1;

        }
    }
    cout << ans << endl;
    for(auto x : p) cout << x.first << ' ' << x.second << endl;
    return 0;
}
