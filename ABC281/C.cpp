#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    vector<ll> s(n+1,0);

    rep(i,n){
        cin >> a[i];
        s[i+1] = s[i] + a[i];
    }

    t %= s[n];
    ll now = 0;
    while(t > s[now]){
        now++;
        if(t < s[now]){
            now--;
            break;
        }
    }
    cout << now+1 << ' ' << t-s[now] << endl;
    return 0;

}