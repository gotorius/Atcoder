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

    vector<string> ans;
    if(k == 1){
        rep(a,n){
            ans.push_back(s[a]);
        }
    }else if(k == 2){
        rep(a,n) rep(b,n){
            ans.push_back(s[a]+s[b]);
        }
    }else if(k == 3){
        rep(a,n) rep(b,n) rep(c,n){
            ans.push_back(s[a]+s[b]+s[c]);
        }
    }else if(k == 4){
        rep(a,n) rep(b,n) rep(c,n) rep(d,n){
            ans.push_back(s[a]+s[b]+s[c]+s[d]);
        }
    }else if(k == 5){
        rep(a,n) rep(b,n) rep(c,n) rep(d,n) rep(e,n){
            ans.push_back(s[a]+s[b]+s[c]+s[d]+s[e]);
        }
    }

    sort(ans.begin(),ans.end());
    cout << ans[x-1] << endl;
    return 0;
}