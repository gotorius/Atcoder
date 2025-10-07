#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    rep(i,n) cin >> c[i];
    rep(i,n) cin >> r[i];

    vector<P> s;
    rep(i,n) if(c[i] == t) s.push_back({r[i],i});
    sort(s.begin(), s.end(), greater<P>());

    if(s.size() != 0){
        cout << s[0].second + 1 << endl;
    }else{
        int ans = 0;
        int max_r = 0;
        rep(i,n){
            if(c[i] == c[0]){
                if(r[i] > max_r){
                    max_r = r[i];
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}