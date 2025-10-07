#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    set<int> st;
    rep(i,n){
        cin >> a[i];
        st.insert(a[i]);
    }
    sort(a.begin(),a.end());
    vector<ll> cnt(st.size());
    int k = 0;
    for(auto p : st){
        if(p == 1) cnt[k] = 1;

    }


    rep(i,q){
        ll ans = 0;
        int b;
        cin >> b;
        if(b > a[n-1]) cout << -1 << endl;
        else{
            auto p = lower_bound(a.begin(), a.end(), b);
            int idx = p - a.begin();
            ans += (n-idx)*(b-1) + 1;
            cout << ans << endl;
        }
    }
}