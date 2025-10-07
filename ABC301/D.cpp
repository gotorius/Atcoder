#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using mint = modint998244353;

ll dp[100000][2];

int main() {
    ll x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;

    int now = 0;
    dp[0][0] = 0;
    dp[0][1] = 0;
    rep(i,s.size()){
        if(s[i] == 'A' && now == 0){

            if(x+z <= y) dp[i+1][1] = dp[i][0] + x + z, now++;
            else dp[i+1][0] = dp[i][0] + y;

        }else if(s[i] == 'A' && now == 1){

            if(x <= y+z) dp[i+1][1] = dp[i][1] + x;
            else dp[i+1][0] = dp[i][1] + y + z, now--;

        }else if(s[i] == 'a' && now == 0){

            if(x <= y+z) dp[i+1][0] = dp[i][0] + x;
            else dp[i+1][1] = dp[i][0] + y + z, now++;

        }else if(s[i] == 'a' && now == 1){

            if(x+z <= y) dp[i+1][0] = dp[i][1] + x + z, now--;
            else dp[i+1][1] = dp[i][1] + y;

        }
    }
    ll ans = min(dp[s.size()][0], dp[s.size()][1]);
    cout << ans << endl;
    return 0;

}