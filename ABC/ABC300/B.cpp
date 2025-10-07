#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

vector<vector<char>> up(vector<vector<char>> a, int h, int w, int c){
    vector<vector<char>> aup(h, vector<char>(w));
    rep(i,h) rep(j,w) {
        aup[i][j] = a[(i + c) % h][j];
    }
    return aup;
}

vector<vector<char>> left(vector<vector<char>> a, int h, int w, int c){
    vector<vector<char>> aleft(h, vector<char>(w));
    rep(i,h) rep(j,w) {
        aleft[i][j] = a[i][(j + c) % w];
    }
    return aleft;
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    vector<vector<char>> b(h, vector<char>(w));
    rep(i,h)rep(j,w) cin >> a[i][j];
    rep(i,h)rep(j,w) cin >> b[i][j];

    rep(i,h){
        rep(j,w){
            if(left(up(a,h,w,i),h,w,j) == b){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
