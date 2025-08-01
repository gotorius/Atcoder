#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int Q;
    cin >> Q;

    queue<ll> q;
    ll now = 0;

    rep(qi,Q){
        int type;
        cin >> type;
        if(type == 1){
            q.push(now);
        }
        if(type == 2){
            ll t;
            cin >> t;
            now += t;
        }
        if(type == 3){
            ll h;
            cin >> h;
            int ans = 0;
            while(q.size() && now-q.front() >= h){
                ans++;
                q.pop();
            }
            cout << ans << '\n';
        }
    }
    return 0;   
}
