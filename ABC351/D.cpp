#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};


int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    const int INF = 1001001001;
    vector<vector<int>> dist(h, vector<int>(w, 1));
    queue<P> q;
    rep(i,h)rep(j,w) {
        if (s[i][j] == '.') {
            dist[i][j] = 0;
            q.emplace(i,j);
        }
    }

    while (q.size()) {
        auto [i,j] = q.front(); q.pop();
        int d = dist[i][j];
        rep(v,4) {
            int ni = i+di[v], nj = j+dj[v];
            if (ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
            if (s[ni][nj] == '#') continue;
            bool ok = true;
            rep(x,4){
                int n2i = ni+di[x], n2j = nj+dj[x];
                if (n2i < 0 || n2j < 0 || n2i >= h || n2j >= w) ok = false;
                if (s[n2i][n2j] = '#') ok = false;
            }
            if(!ok) continue;
            dist[ni][nj] = max(dist[ni][nj])
            q.emplace(ni,nj);
        }
    }


   
}
