#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  const int INF = 1001001001;
  vector<vector<int>> dp(n+1, vector<int>(3,-INF));
  rep(i,3) dp[0][i] = 0;

  for (int i = 1; i <= n; i++) {
    int x = 0;
    if (s[i-1] == 'R') x = 0;
    if (s[i-1] == 'P') x = 1;
    if (s[i-1] == 'S') x = 2;

    rep(j,3) {
      int val = 0;
      if (j == (x+1)%3) val = 1;
      if (j == (x+2)%3) continue;
      rep(pj,3) {
        if (j == pj) continue;
        dp[i][j] = max(dp[i][j], dp[i-1][pj]+val);
      }
    }
  }

  int ans = max({dp[n][0],dp[n][1],dp[n][2]});
  cout << ans << endl;
  return 0;
}