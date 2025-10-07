#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<ll,int>;

int main(void){
    int n;
    cin >> n;
    vector<P> p(n);
    rep(i,n){
        ll a, b;
        cin >> a >> b;
        if(a > 1e9 && b > 1e9) a /= 1e9, b /= 1e9;
        p[i] = {b/a+b,i+1};
    }
    
    sort(p.rbegin(), p.rend());
    rep(i,n) cout << p[n-i-1].second << ' ';
    cout << endl;
    return 0;
}