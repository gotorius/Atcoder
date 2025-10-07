#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main(void){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    queue<P> que;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == 'E') que.push({i,j});
        }
    }

    vector<vector<int>> dist(h, vector<int>(w,-1));
    while(!que.empty()){
        P pos = que.front();
        que.pop();
        int x = pos.first;
        int y = pos.second;
        rep(i,4){
            if(x+dx[i] >= 0 && x+dx[i] < h && y+dy[i] >= 0 && y+dy[i] < w){
                if(s[x+dx[i]][y+dy[i]] == '#') continue;
                if(dist[x+dx[i]][y+dy[i]] == -1 || dist[x+dx[i]][y+dy[i]]);
            }
        }

        
    }

}