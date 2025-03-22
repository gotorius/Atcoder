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
    vector<set<int>> g(n);

    rep(i,n-1){
        int u, v;
        cin >> u >> v;
        u--; v--;
        g[u].insert(v);
        g[v].insert(u);
        d.merge(u, v);
    }

    auto f = [&](vector<set<int>> g, int n){
        vector<int> c(n, -1);
        for(int i = 0; i < n; i++){
            if(c[i] != -1) continue;
            queue<int> q;
            q.push(i);
            c[i] = 0;

            while(!q.empty()){
                int num = q.front();
                q.pop();
                for(int p : g[num]){
                    if(c[p] == -1){
                        c[p] = 1 - c[num];
                        q.push(p);
                    }else if(c[p] == c[num]){
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
                g[u].insert(v);
                g[v].insert(u);
            }
        }

        bool found = false;
        for(int i = 0; i < n; i++){
            for(int j : d.groups()[0]){
                if(i == j || g[i].count(j)) continue;

                g[i].insert(j);
                g[j].insert(i);

                if(f(g, n)){
                    cout << i + 1 << ' ' << j + 1 << endl;
                    found = true;
                    break;
                }

                g[i].erase(j);
                g[j].erase(i);
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
                g[u].insert(v);
                g[v].insert(u);
            }
        }
    }
    return 0;
}
