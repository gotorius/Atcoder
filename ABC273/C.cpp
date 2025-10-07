#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> sa;
    map<int,int> ans;
    map<int,int> mp;
    rep(i,n){
        cin >> a[i];
        sa.insert(a[i]);
    }
    int size = sa.size();

    int now = 0;
    for(auto x : sa){
        mp[x] = now;
        now++;
    }

    rep(i,n){
        auto p = upper_bound(sa.begin(), sa.end(), a[i]);
        if(mp[*p] == 0) ans[0]++;
        else ans[size-mp[*p]]++;
    }

    rep(i,n) cout << ans[i] << endl;
    return 0;

}