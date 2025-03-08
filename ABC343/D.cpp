#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    ll n, t;
    cin >> n >> t;
    map<ll,ll> mp;
    set<ll> st;
    vector<ll> p(n,0);
    st.insert(0);
    mp[0] = n;

    rep(i,t){
        ll a, b;
        cin >> a >> b;
        a--;
        mp[p[a]]--;
        if(mp[p[a]] == 0) st.erase(p[a]);
        p[a] += b;
        mp[p[a]]++;
        st.insert(p[a]);
        cout << st.size() << endl;
    }
    return 0;
}
