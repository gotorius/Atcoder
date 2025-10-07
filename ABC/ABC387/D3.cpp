#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int bfs(int si, int sj, vector<string> g, int ans) {
    int n = g.size();
    vector<vector<int>> dis(n, vector<int>(n,-1));

    queue<P> q;
    q.push({si,sj});

    while (!q.empty()) {
        P now = q.front();
        q.pop();
        if(dis[now.first][now.second] != -1)
    }

    // 結果の出力
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << ": Distance = " << distance[i] << endl;
    }
    return 0;
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
   
}