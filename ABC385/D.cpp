#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    vector<ll> x(n), y(n);
    map<ll, vector<ll>> xpos,ypos;

    rep(i,n){
        cin >> x[i] >> y[i];
        ypos[x[i]].push_back(y[i]);
        xpos[y[i]].push_back(x[i]);
    }

    int ans = 0;
    rep(i,m){
        char d;
        ll c;
        cin >> d >> c;

        if(d == 'U'){
            if(ypos.find(sx) != ypos.end()){
                for(auto p : ypos[sx]){
                    if(sy <= p && sy+c > p){
                        ans++;
                        cout << 'U' << endl;
                    }
                }
            }
            sy += c;
        }else if(d == 'D'){
            if(ypos.find(sx) != ypos.end()){
                for(auto p : ypos[sx]){
                    if(sy >= p && sy+c < p){
                        ans++;
                        cout << 'D' << endl;
                    }
                }
            }
            sy -= c;
        }else if(d == 'R'){
            if(xpos.find(sy) != xpos.end()){
                for(auto p : xpos[sy]){
                    if(sx <= p && sx+c > p){
                        ans++;
                        cout << 'R' << endl;
                    }
                }
            }
            sx += c;
        }else if(d == 'L'){
            if(xpos.find(sy) != xpos.end()){
                for(auto p : xpos[sy]){
                    if(sx >= p && sx+c < p){
                        ans++;
                        cout << 'L' << endl;
                    }
                }
            }
            sx -= c;
        }
    }

    cout << sx << ' ' << sy << ' ' << ans << endl;
    return 0;

}