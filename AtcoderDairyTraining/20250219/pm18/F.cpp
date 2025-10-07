#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

ll f(int n){
    return (n+1)*n/2;
};

int main(void){
    int n, m;
    cin >> n >> m;
    vector<ll> x(m), a(m), s(n,0);
    rep(i,m) cin >> x[i], x[i]--;
    rep(i,m) cin >> a[i];
    rep(i,m) s[x[i]] = a[i];

    ll ans = 0, now = 0;
    while(now <= n){
        if(s[now] == 1) now++;
        else if(s[now] == 0){
            ans = -1;
            break;
        }
        else{
            int cnt = 0;
            now++;
            while(s[now] == 0){
                now++;
                cnt++;
            }
            int w = s[now-cnt-1] - cnt;
            if(w < 1){
                ans = -1;
                break;
            }else{
                s[now] += (s[now-cnt-1]-cnt-1);
                ans += f(cnt);
                ans += (s[now-cnt-1]-cnt-1)*(cnt+1);
            }
        }
        cout << ans << endl;
        return 0;

    }

}