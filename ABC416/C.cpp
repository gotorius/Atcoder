#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, k, x;
    cin >> n >> k >> x;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    sort(s.begin(), s.end());
    vector<string> st;
    rep(i, 1<<n){
        if(__builtin_popcount(i) == k){
            vector<int> p;
            rep(j, n){
                if(i & (1<<j)) p.push_back(j);
            }

            rep(a,k) cout << p[a];
            do{
                string c;
                rep(z,k){
                    c += s[p[z]];
                }
                st.push_back(c);
            }while(next_permutation(p.begin(),p.end()));
        }
    }
    sort(st.begin(),st.end());
    rep(i,st.size()) cout << st[i] << " ";
    cout << endl;
    return 0;
}