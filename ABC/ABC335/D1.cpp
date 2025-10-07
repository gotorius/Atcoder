#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    int now = 1;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<vector<string>> s(n, vector<string>(n, ""));
    int h = 0, w = 0;

    while(now <= n * n){
        while(w < n && !visited[h][w]){
            s[h][w] = to_string(now++);
            visited[h][w] = true;
            if(w + 1 < n && !visited[h][w + 1]) w++;
            else break;
        }
        h++;

        while(h < n && !visited[h][w]){
            s[h][w] = to_string(now++);
            visited[h][w] = true;
            if(h + 1 < n && !visited[h + 1][w]) h++;
            else break;
        }
        w--;

        while(w >= 0 && !visited[h][w]){
            s[h][w] = to_string(now++);
            visited[h][w] = true;
            if(w - 1 >= 0 && !visited[h][w - 1]) w--;
            else break;
        }
        h--;

        while(h >= 0 && !visited[h][w]){
            s[h][w] = to_string(now++);
            visited[h][w] = true;
            if(h - 1 >= 0 && !visited[h - 1][w]) h--;
            else break;
        }
        w++;
    }

    int center = n / 2;
    s[center][center] = "T";

    rep(i,n){
        rep(j,n){
            cout << s[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;

}