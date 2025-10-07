#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    P pos;
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
            if(a[i][j] == 'S') pos = {i,j};
        }
    }
    queue<P> que;
    que.push(pos);
    while(!que.empty()){
    }
}