#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    vector<vector<int>> a(n);

    vector<map<int,double>> mp(n); 
    rep(i,n){
        cin >> k[i];
        rep(j,k[i]){
            cin >> a[i][j];
            mp[i][a[i][j]]++;
        }
    }

    double ans = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            for(auto p : mp[i]){
                ans = max(ans, (p.second/k[i]) * (mp[j][p.second]/k[j]));
            }
        }
    }
    cout << ans << endl;
    return 0;
   
}