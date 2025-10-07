#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
    ll n, q;
    cin >> n >> q;
    
    set<P> s;
    rep(i,q){
        ll t, a, b;
        cin >> t >> a >> b;
        a--; b--;
        if(t == 1){
            s.emplace(a,b);
        }else if(t == 2){
            s.erase({a,b});
        }else if(t == 3){
            if(s.count({a,b}) && s.count({b,a})) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;

}
