#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    set<int> st;
    rep(i,m) {
        cin >> a[i];
        st.insert(a[i]);
    }

    vector<int> ans;

    rep(i,n){
        if(!st.count(i+1)) ans.push_back(i+1);      
    }
    cout << ans.size() << endl;
    rep(i,ans.size()) cout << ans[i] << ' ';
    cout << endl;
    return 0;
   
}