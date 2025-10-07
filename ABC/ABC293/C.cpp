#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    vector<int> di = {1,0,1,0};
    vector<int> dj = {1,1,0,0};

    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int> (w));
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
        }
    }

    int ans = 0;
    auto dfs = [&](int i, int j, int cnt){
        map<int,int> m;
        if(cnt == h+w-1){
            ans++;
            return 0;
        }
    };

}