#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    map<set<int>, int> mp;
    rep(i,m){
        int k;
        cin >> k;
        set<int> st;
        rep(j,k){
            int a;
            cin >> a;
            st.insert(a);
        }
        mp[st]++;
    }

    for(auto p : mp){
        for(auto x : p.first){
            cout << x << " ";
        }
        cout << endl;
        cout << p.second << endl;
    }


    vector<int> b(n);
    rep(i,n) cin >> b[i];

    int ans = 0;
    set<int> ast;
    rep(i,n){
        ast.insert(b[i]);
        if(mp.count(ast)) ans += mp[ast];
        cout << ans << endl;
    }
    return 0;

}