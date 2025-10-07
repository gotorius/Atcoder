#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    string o = "";
    rep(x,m) o.push_back('o');

    int ans = 1001001001;
    rep(i,1<<n){
        string t = "";
        rep(x,m) t.push_back('x');
        int num = 0;
        rep(j,n){
            if(i>>j&1){
                num++;
                rep(k,m){
                    if(s[j][k] == 'o') t[k] = 'o';
                }
            }
        }
        if(t == o) ans = min(ans, num);
    }
    cout << ans << endl;
    return 0;
}