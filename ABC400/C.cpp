#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    ll n;
    cin >> n;
    set<ll> st;

    for(int a = 1; (1LL << a) < n; a++){
        ll p2a = 1LL << a;
        for(int b = 1;; b++){
            ll x = p2a * b * b;
            if(x >= n) break;
            st.insert(x);
        }
    }
    cout << st.size() << endl;
    return 0;

}