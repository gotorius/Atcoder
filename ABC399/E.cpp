#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int t;
    cin >> t;

    rep(x, t){
        int n;
        cin >> n;
        vector<int> a(2*n);
        map<int,set<int>> mp;
        rep(i,2*n){
            cin >> a[i];
            mp[a[i]].insert(i);
        }

        int ans = 0;
        for(int j = 0; j+1 < 2*n; j += 2){
            if(a[j] == a[j+1]) continue;
            else{
                ans++;
                auto it = mp[a[j]].begin();
                it++;
                int idx = *it;
                swap(a[j+1], a[idx]);
                mp[a[idx]].erase(j+1);
                mp[a[idx]].insert(idx);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
