#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    map<ll, char> mp;
    rep(i,s.size()) mp[i] = s[i]; 

    ll now = 0;
    rep(i,q){
        ll num, x;
        cin >> num >> x;
        if(num == 1){
            now += s.size()-x;
        }else if(num == 2){
            now %= s.size();
            ll p = (now+x-1)%s.size();
            cout << mp[p] << endl;
        }
    }
    return 0;
}