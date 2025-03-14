#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    vector<set<int>> stj(n);
    vector<set<int>> sti(n);

    rep(i,n){
        rep(j,n){
            if(s[i][j] == 'x') continue;
            sti[i].insert(j);
            stj[j].insert(i);
        }
    }

    int ans = 0;
    rep(i,n){
        rep(j,n){
            if(s[i][j] == 'o'){
                if(sti[i].size() > 1 && stj[j].size() > 1){
                    ans += (sti[i].size()-1)*(stj[j].size()-1);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}