#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int ans = 0;
    set<int> s1;
    set<int> s2;
    map<int,int> mp;
    rep(i,n){
        s1.insert(a[i]);
        mp[a[i]]++;
    }

    rep(i,n-1){
        mp[a[n-i-1]]--;
        if(mp[a[n-i-1]] == 0) s1.erase(a[n-i-1]);
        s2.insert(a[n-i-1]);
        int cnt = s1.size()+s2.size();
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;

}
