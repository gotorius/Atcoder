#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<vector<int>> to(n);
    vector<int> get;
    rep(i,n){
        int a, b;
        cin >> a >> b;
        if(a == 0) get.push_back(i);
        else{
            a--;b--;
            to[a].push_back(i);
            to[b].push_back(i);
        }
    }

    vector<bool> visited(n,false);
    queue<int> que;
    for(auto p : get){
        visited[p] = true;
        que.push(p);
    }

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(auto p : to[v]){
            if(visited[p]) continue;
            visited[p] = true;
            que.push(p);
        }
    }

    int ans = 0;
    rep(i,n){
        if(visited[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}