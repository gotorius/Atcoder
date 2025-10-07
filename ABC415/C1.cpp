#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

void solve() {
  int n; string s;
  cin >> n >> s;

  int n2 = 1<<n;

  vector<bool> visited(n2);
  queue<int> q;
  visited[0] = true;
  q.push(0);

  while (!q.empty()) {
    int t = q.front(); q.pop();
    rep(i,n) {
      int nt = t | 1<<i;
      if (nt == t) continue;
      if (s[nt-1] == '1') continue;
      if (visited[nt]) continue;
      visited[nt] = true;
      q.push(nt);
    }
  }

  if (visited[n2-1]) cout << "Yes\n";
  else cout << "No\n";
}

int main() {
  int T;
  cin >> T;
  rep(ti,T) solve();
  return 0;
}