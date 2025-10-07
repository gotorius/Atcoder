#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m);
    rep(i,m){
        int k;
        cin >> k;
        rep(j,k){
            int d;
            cin >> d;
            a[i].push_back(d);
        }
    }

    vector<int> b(n);
    rep(i,n) cin >> b[i];
    map<int,int> mp;
    rep(i,n) mp[b[i]] = i;
    rep(i,m){
        sort(a[i].begin(), a[i].end(), [&](int x, int y) {
            return mp[x] > mp[y];
        });
    }
    map<int,int> ans;
    rep(i,m){
        ans[a[i][0]]++;
    }
    int cnt = 0;
    rep(i,n){
        cnt += ans[b[i]];
        cout << cnt << endl;
    }
    return 0;

}