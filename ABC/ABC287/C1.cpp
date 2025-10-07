#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i,m){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int l1 = 0;
    int l2 = 0;
    rep(i,n){
        if(g[i].size() == 2){
            l2++;
        }else if(g[i].size() == 1){
            l1++;
        }
    }
    if(l2 == n-2 && l1 == 2){
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
    }
    return 0;
    
}
