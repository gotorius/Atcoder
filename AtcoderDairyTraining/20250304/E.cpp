#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i,h) rep(j,w) cin >> a[i][j];
    vector<int> g;
    rep(i,h-1) g.push_back(0);
    rep(i,w-1) g.push_back(1);
    int ans = 0;

    do{
        int hi = 0, wi = 0;
        set<int> st;
        st.insert(a[0][0]);
        rep(i,h+w-2){
            if(g[i] == 0){
                hi++;
                st.insert(a[hi][wi]);
            }else{
                wi++;
                st.insert(a[hi][wi]);
            } 
        }
        if(st.size() == h+w-1) ans++;
    }while(next_permutation(g.begin(), g.end()));

    cout << ans << endl;
    return 0;
}
