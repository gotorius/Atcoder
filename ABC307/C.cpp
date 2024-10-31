#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

struct sheet{
    int h, w;
    vector<string> s;
    void input(){
        cin >> h >> w;
        s = vector<string>(h);
        rep(i,h) cin >> s[i];
    }
    void clear(){
        rep(i,h) rep(j,w) s[i][j] = '.';
    }
    bool copy(sheet a, int di, int dj){
        rep(i, a.h)rep(j, a.w){
            if(a.s[i][j] == '.') continue;
            int ni = i+di, nj = j+dj;
            if(ni < 0 || ni >= h || nj < 0 || nj >= w) return false;
            s[ni][nj] = a.s[i][j];
        }
        return true;
    }
};


int main(){
    sheet a, b, x;
    a.input();
    b.input();
    x.input();

    for(int ai = -a.h; ai < x.h; ai++){
        for(int aj = -a.w; aj < x.w; aj++){
            for(int bi = -b.h; bi < x.h; bi++){
                for(int bj = -b.w; bj < x.w; bj++){
                    sheet y = x;
                    y.clear();
                    if(!y.copy(a,ai,aj)) continue;
                    if(!y.copy(b,bi,bj)) continue;
                    if(x.s == y.s){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

