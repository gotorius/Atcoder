#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    vector<string> s(9);
    rep(i,9) cin >> s[i];

    int ans = 0;
    rep(a,9){
        rep(b,9){
            rep(c,9){
                rep(d,9){
                    rep(e,9){
                        rep(f,9){
                            rep(g,9){
                                rep(h,9){
                                    if(s[a][b] == '#' && s[c][d] == '#' && s[e][f] == '#' && s[g][h] == '#'){
                                        if(a == c && b == d) continue;
                                        if(a == e && b == f) continue;
                                        if(a == g && b == h) continue;
                                        if(c == e && d == f) continue;
                                        if(c == g && d == h) continue;
                                        if(e == g && f == h) continue;
                                        if(sqrt((a-c)*(a-c)+(b-d)*(b-d)) == sqrt((c-e)*(c-e)+(d-f)*(d-f)) &&
                                         sqrt((c-e)*(c-e)+(d-f)*(d-f)) == sqrt((e-g)*(e-g)+(f-h)*(f-h)) &&
                                          sqrt((e-g)*(e-g)+(f-h)*(f-h)) == sqrt((g-a)*(g-a)+(h-b)*(h-b))){
                                            ans++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans/4 << endl;
    return 0;

}