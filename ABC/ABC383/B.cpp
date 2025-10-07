#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    vector<string> ss(h);
    rep(i,h) cin >> s[i];
    ss = s;

    int cnt = 0, mcnt = 0;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '.'){
                cnt = 0;
                rep(a,h){
                    rep(b,w){
                        if(s[a][b] == '.' && (abs(i-a)+abs(j-b) <= d)){
                            s[a][b] = 'x';
                            cnt++;
                        }
                    }
                }
                int q = cnt;

                rep(x,h){
                    rep(y,w){
                        if((x != i && y != j) && (s[x][y] == 'x' || s[x][y] == '.')){
                            rep(x1,h){
                                rep(y1,w){
                                    if(s[x1][y1] == '.' && (abs(x-x1)+abs(y-y1) <= d)){
                                        cnt++;
                                    }
                                }
                            }
                            mcnt = max(mcnt,cnt);
                            cnt = q;
                        }
                    }
                }
                mcnt = max(mcnt, cnt);
            }
            s = ss;
        }
    }
    cout  << mcnt << endl;
    return 0;
   
}