#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> c(h, vector<char>(w));
    rep(i,h)rep(j,w) cin >> c[i][j];
    vector<int> s(min(h, w), 0);

    rep(i,h){
        rep(j,w){
            if(c[i][j] == '#' && i-1>=0 && j-1>=0 && i+1<h && j+1<w){
                if(c[i+1][j+1] == '#' && c[i-1][j-1] == '#' && c[i-1][j+1] == '#' && c[i+1][j-1] == '#'){
                    int ni = i, nj = j;
                    int cnt = 0;
                    while(ni+1 < h && nj+1 < w && c[ni+1][nj+1] == '#' ){
                        ni++;
                        nj++;
                        cnt++;
                    }
                    s[cnt-1]++;
                }
            }
        }
    }
    rep(i,s.size()) cout << s[i] << ' ';
    cout << endl;
    return 0;   
}
