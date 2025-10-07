#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n); 
    vector<string> d(m); 
    vector<int> p(m+1); 
    map<string, int> price;
    rep(i,n) cin >> c[i];
    rep(i,m) cin >> d[i];
    rep(i,m+1) cin >> p[i];
    rep(i,m) price[d[i]] = p[i+1];

    int ans = 0;
    rep(i,n){
        if(price.find(c[i]) != price.end()){
            ans += price[c[i]];
        }else{
            ans += p[0];
        }
    }
    cout << ans << endl;
    return 0;

}
