#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    rep(i,n){
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;

    for(auto x: mp){
        ans += x.second/2;
    }
    cout << ans << endl;
    return 0;

}