#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    map<int,int> mp;
    rep(i,n){
        cin >> p[i];
        mp[p[i]] = i;
    }

    int now = 0;
    int ans = 1e9;
    queue<int> que;

    while(now+k < n){
        int l = 1e9, r = -1;
        for(int i = now; i < k+now; i++){
            l = min(l,mp[i+1]);
            r = max(r,mp[i+1]);
        }
        ans = min(ans,r-l);
        now++;
    }
    cout << ans << endl;
    return 0;


   
}