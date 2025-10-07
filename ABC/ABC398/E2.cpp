#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

//ACL
#include <atcoder/all>
using namespace atcoder;


int main(void){
    int n;
    cin >> n;
    dsu d(n);
    vector<vector<bool>> g(n, vector<bool>(n, false));
    rep(i,n-1){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u][v] = true;
        g[v][u] = true;
        d.merge(u,v);
    }

    bool ok = true;
    string s;
    cin >> s;
    if(s == "First"){
        while(ok){
            for(int i = 0; i < n-1; i++){
                bool next = false;
                for(int j = i+1; j < n; j++){
                    if(!g[i][j]){
                        dsu x = d;
                        x.merge(i,j);
                        if(x.size(i)%2 == 0){
                            cout << i+1 << ' ' << j+1 << endl;
                            d = x;
                            g[i][j] = true;
                            g[j][i] = true;
                            next = true;
                            break;
                        }
                    }
                }
                if(next) break;
                else{
                    cout << -1 << ' ' << -1 << endl;
                    return 0;
                }
            }
            int u, v;
            cin >> u >> v;
            if(u == -1 && v == -1) ok = false;
            else u--; v--;
            d.merge(u,v);
        }
    }else{
    }
    return 0;

}