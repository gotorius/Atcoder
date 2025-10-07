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
    vector<vector<int>> g(n);

    rep(i,n-1){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
        d.merge(u, v);
    }

    auto f = [&](vector<vector<int>> g, int n) {
        vector<int> d(n,-1);
        for(int i = 0; i < n; i++){
            if(d[i] != -1) continue;
            queue<int> q;
            q.push(i);
            d[i] = 0;
            while(!q.empty()){
                int num = q.front();
                q.pop();
                for(int p : g[num]){
                    if(d[p] == -1){
                        d[p] = 1 - d[num];
                        q.push(p);
                    }else if (d[p] == d[num]){
                        return false;
                    }
                }
            }
        }
        return true;
    };

    bool ok = true;
    string s;
    cin >> s;
    while(ok){
        if(s == "Second"){
            int u, v;
            cin >> u >> v;
            if(u == -1 && v == -1) ok = false;
            else{
                u--; v--;
                d.merge(u, v);
                g[u].push_back(v);
                g[v].push_back(u);
            }
        }
        bool found = false;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(find(g[i].begin(), g[i].end(), j) == g[i].end()){
                    vector<vector<int>> x = g;
                    x[i].push_back(j);
                    x[j].push_back(i);
                    if(f(x, n)){
                        cout << i+1 << ' ' << j+1 << endl;
                        g[i].push_back(j);
                        g[j].push_back(i);
                        found = true;
                        break;
                    }
                }
            }
            if(found) break;
        }
        if(!found){
            cout << -1 << ' ' << -1 << endl;
            return 0;
        }
        
        if(s == "First"){
            int u, v;
            cin >> u >> v;
            if(u == -1 && v == -1) ok = false;
            else{
                u--; v--;
                d.merge(u, v);
                g[u].push_back(v);
                g[v].push_back(u);
            }
        }
    }
    return 0;
}
