#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    int now = 0;
    vector<vector<bool>> visited(n, vector<bool>(n,true));
    vector<vector<char>> s(n, vector<char>(n, ' '));
    int h = 0, w = 0;
    while(now < n*n){
        while(w < n && visited[h][w]){
            now++;
            s[h][w] = 'A' + now;
            visited[h][w] = false;
            if(w+1 < n && visited[h][w+1]) w++;
            else break;
        }
        while(h < n && visited[h][w]){
            now++;
            s[h][w] = 'A' + now;
            visited[h][w] = false;
            if(h+1 < n && visited[h+1][w]) h++;
            else break;
        }
        while(w >= 0 && visited[h][w]){
            now++;
            s[h][w] = 'A' + now;
            visited[h][w] = false;
            if(w-1 >= 0 && visited[h][w-1]) w--;
            else break;
        }
        while(h >= 0 && visited[h][w]){
            now++;
            s[h][w] = 'A' + now;
            visited[h][w] = false;
            if(h-1 >= 0 && visited[h-1][w]) h--;
            else break;
        }
    }
    rep(i,n){
        rep(j,n){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;

}