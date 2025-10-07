#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    map<int,int> mp;
    rep(i,n){
        cin >> a[i];
        mp[a[i]]++;
    }
    rep(i,m){
        cin >> b[i];
        if(mp.find(b[i]) != mp.end() && mp[b[i]] != 0) mp[b[i]]--;
    }
    for(auto p : mp){
        if(p.second != 0){
            rep(i,p.second) cout << p.first << ' ';
        }
    }
    cout << endl;
    return 0;
}