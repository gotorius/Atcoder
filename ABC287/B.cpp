#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<string> t(m);
    rep(i,n){
        cin >> s[i];
    }

    rep(i,n){
        reverse(s[i].begin(), s[i].end());
        rep(j,3){
            s[i].pop_back();
        }
        reverse(s[i].begin(), s[i].end());
    }

    rep(i,m) cin >> t[i];

    int ans = 0;
    rep(i,n){
        rep(j,m){
            if(s[i] == t[j]){
                ans++;
                break;
            }
        }
        
    }
    cout << ans << endl;
    return 0;

}
