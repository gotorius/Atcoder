#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int t;
    cin >> t;

    rep(i,t){
        int n;
        vector<int> a(n);
        map<int,set<int>> mp;
        rep(i,n){
            cin >> a[i];
            mp[a[i]].insert(i);
        }
        int ans = 0;
        for(int j=0; j<n; j+=2){
            if(a[j] == a[j+1]) continue;
            else{
                ans++;
                auto it = mp[a[j]].begin();
                it++;
                swap(a[j+1], a[*it]);
                mp[a[j]].erase(*it);
                mp[a[j]].insert(j+1);
                mp[a[j+1]].erase(j+1);
                mp[a[j+1]].insert(*it);
            }
        }
        cout << ans << endl;
    }
    return 0;
}