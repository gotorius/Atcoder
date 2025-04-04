#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> p(n);
    set<int> st;
    map<int,vector<int>> mp;
    rep(i,n){
        cin >> p[i];
        mp[p[i]].push_back(i);
        st.insert(p[i]);
    }

    int r = n;
    vector<int> ans(n);
    for(auto x : st){
        int cnt = 0;
        for(auto m : mp[x]) ans[m] = r-mp[x].size()+1;
        r -= mp[x].size();
    }
    rep(i,n) cout << ans[i] << endl;
    return 0;

}