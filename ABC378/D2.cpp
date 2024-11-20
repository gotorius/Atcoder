#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main() {
  int h, w;
  int k;
  cin >> h >> w >> k;
  vector<string> s(h);
  rep(i,h) cin >> s[i];

  auto dfs = [&](auto dfs, int i, int j, int k, vector<string> s) -> int {
    if (k == 0) return 1;
    s[i][j] = '*';
    int res = 0;
    rep(v,4) {
      int ni = i+di[v], nj = j+dj[v];
      if (ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
      if (s[ni][nj] != '.') continue;
      res += dfs(dfs,ni,nj,k-1,s);
    }
    return res;
  };

  int ans = 0;
  rep(si,h)rep(sj,w) {
    if (s[si][sj] == '#') continue;
    ans += dfs(dfs,si,sj,k,s);
  }
  cout << ans << endl;
  return 0;
}