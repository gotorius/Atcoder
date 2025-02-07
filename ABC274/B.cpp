#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    rep(i,w){
        int ans = 0;
        rep(j,h){
            if(s[j][i] == '#') ans++;
        }
        cout << ans << ' ';
    }
    cout << endl;
    return 0;
   
}