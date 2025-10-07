#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

//snuke's code
int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;
  s += "..";
  t += "..";

  map<string,int> dist;
  queue<string> q;
  dist[s] = 0; q.push(s);

  while (!q.empty()) {
    string s = q.front(); q.pop();
    int j = 0;
    while (s[j] != '.') ++j;
    rep(i,n+1) {
      if (s[i] == '.' || s[i+1] == '.') continue;
      string ns = s;
      swap(ns[i],ns[j]);
      swap(ns[i+1],ns[j+1]);
      if (dist.count(ns)) continue;
      dist[ns] = dist[s]+1; q.push(ns);
    }
  }

  if (dist.count(t)) cout << dist[t] << endl;
  else cout << -1 << endl;
  return 0;
}