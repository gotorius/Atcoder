#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int di[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dj[8] = {0, 0, 1, -1, 1, -1, 1, -1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    string T = "snuke";

    rep(si,h)rep(sj,w){
        rep(v,8){
            int i = si, j = sj;
            rep(k,5){
                if(i<0 || j<0 || i>=h || j>=w) break;
                if(s[i][j] != T[k]) break;
                if(k == 4){
                    i = si, j = sj;
                    rep(nk,5){
                        printf("%d %d\n",i+1, j+1);
                        i += di[v]; j += dj[v];
                    }
                    return 0;
                }
                i += di[v]; j += dj[v];
            }
        }
    }
    return 0;
}
