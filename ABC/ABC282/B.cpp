#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    string a(m,'o');
    int ans = 0;
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            bool ok = true;
            rep(k,m){
                if(s[i][k]=='o' || s[j][k]=='o') continue;
                else ok = false;
            }
            if(ok == true) ans++;
        }
    }
    ans /= 2;
    cout << ans << endl;
    return 0;
   
}