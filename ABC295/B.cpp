#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> b(r);
    rep(i,r) cin >> b[i];

    auto f = [&](int i, int j){
        int num = b[i][j] - '0';
        b[i][j] = '.';
        rep(x,r){
            rep(y,c){
                if(b[x][y] == '#' && abs(x-i)+abs(y-j) <= num){
                    b[x][y] = '.';
                }
            }
        }
    };

    rep(i,r){
        rep(j,c){
            if(b[i][j] != '.' && b[i][j] != '#'){
                f(i,j);
            }
        }
    }

    rep(i,r){
        cout << b[i] << endl;
    }
    return 0;
}