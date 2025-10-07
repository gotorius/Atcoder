#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<ll> s(n);
    vector<ll> t(n);
    rep(i,n) cin >> s[i];
    ll m = 1001001001;
    ll mi = 0;
    rep(i,n){
        cin >> t[i];
        if(m > t[i]){
            m = t[i];
            mi = i;
        }
    }
    rep(i,n){
        ll ts = t[(mi+i)%n]+s[(mi+i)%n];
        if(t[(mi+1+i)%n] > ts) t[(mi+1+i)%n] = ts;
    }
    rep(i,n) cout << t[i] << endl;
    return 0;

}