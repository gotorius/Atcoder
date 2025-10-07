#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int q;
    cin >> q;

    queue<ll> que;
    ll time = 0;
    rep(i,q){
        ll num;
        cin >> num;
        if(num == 1){
            que.push(time);
        }else if(num == 2){
            ll t;
            cin >> t;
            time -= t;
        }else if(num == 3){
            ll h;
            cin >> h;
            ll cnt = 0;
            while(que.front()-time >= h && !que.empty()){
                que.pop();
                cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}