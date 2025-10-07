#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    P now = {0,1001001001};
    map<int,int> mp;
    rep(i,m){
        mp[a[i]]++;
        if(mp[a[i]] == now.first){
            now.first = mp[a[i]];
            if(a[i] < now.second){
                now.second = a[i];
            }
        }else if(mp[a[i]] > now.first){
            now.first = mp[a[i]];
            now.second = a[i];
        }
        cout << now.second << endl;
    }
    return 0;
}