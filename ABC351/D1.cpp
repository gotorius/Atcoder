#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];
  vector x(h, vector<bool>(w));
  rep(i,h)rep(j,w) if (s[i][j] == '#') {
    x[i][j] = true;
    rep(v,4) {
      int ni = i+di[v], nj = j+dj[v];
      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      x[ni][nj] = true;
    }
  }

  vector used(h, vector<bool>(w));
  vector last(h, vector<int>(w)); int tm = 0;
  int ans = 1;
  rep(si,h)rep(sj,w) if (!x[si][sj]) {
    if (used[si][sj]) continue;
    ++tm;
    int cnt = 0;
    queue<P> q;
    q.emplace(si,sj); used[si][sj] = true;
    while (!q.empty()) {
      auto [i,j] = q.front(); q.pop();
      cnt++;
      rep(v,4) {
        int ni = i+di[v], nj = j+dj[v];
        if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
        if (used[ni][nj]) continue;
        if (x[ni][nj]) {
          if (last[ni][nj] != tm) cnt++, last[ni][nj] = tm;
          continue;
        }
        q.emplace(ni,nj); used[ni][nj] = true;
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}