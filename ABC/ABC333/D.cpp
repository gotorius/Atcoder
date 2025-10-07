#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<bool> visited(n,true);
    rep(i,n){
        if(g[i].size() == 1){
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int v = q.front();
                q.pop();
                if(visited[v]) visited[v] = false;
                else continue;
                for(int next : g[v]){
                    if(visited[next]){
                        q.push(next);
                    }
                }
            }
        }

    }


    

}
