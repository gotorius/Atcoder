#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(n);
    vector<int> cnt(m);
    vector<int> ans(n,0);

    rep(i,n){
        rep(j,m){
            cin >> s[i][j];
        }
    }

    rep(i,m){
        int a0 = 0, a1 = 0;
        rep(j,n){
            if(s[j][i] == 0) a0++;
            else a1++;
        }
        if(a0 == 0 || a1 == 1) cnt[i] = 2;
        else if(a0 > a1) cnt[i] = 0;
        else cnt[i] = 1;
    }

    rep(i,m){
        if(cnt[i] == 2){
            rep(j,n) ans[j]++;
        }else{
            rep(j,n){
                if(cnt[i] == s[j][i]) ans[j]++;
            }
        }
    }

    int ans = 0;
    int max = ans[0];
    rep(i,n){
        
    }
    
}