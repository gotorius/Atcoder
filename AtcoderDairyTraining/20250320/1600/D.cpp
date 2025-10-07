#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k);
    vector<int> l(q);
    set<int> st;
    rep(i,k){
        cin >> a[i];
        st.insert(a[i]);
    }
    rep(i,q) cin >> l[i];

    rep(i,q){
        if(a[l[i]-1] != n && st.count(a[l[i]-1]+1) == 0){
            st.insert(a[l[i]-1]+1);
            st.erase(a[l[i]-1]);
            a[l[i]-1]++;
        }
    }
    rep(i,k) cout << a[i] << ' ';
    cout << endl;
    return 0;
}