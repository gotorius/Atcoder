#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];

    vector<int> ans(n);
    vector<int> st;
    for(int i = n-1; i >= 0; i--){
        ans[i] = st.size();
        while(st.size() > 0 && st.back() < h[i]){
            st.pop_back();
        }
        st.push_back(h[i]);
    }
    rep(i,n) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
