#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    set<ll> st;
    rep(i,n){
        cin >> a[i];
        st.insert(a[i]);
    }
    ll ans = 0;
    rep(i,k){
        if(st.count(i)) ans++;
        else break;
    }
    cout << ans << endl;
    return 0;

}
