#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int n, n2;
vector<vector<int>> a;
int ans;
void dfs(vector<bool> s, int x) {
  int si = -1;
  rep(i,n2) if (!s[i]) { si = i; break;}
  if (si == -1) {
    ans = max(ans, x);
    return;
  }

  s[si] = true;
  rep(i,n2) if (!s[i] && si != i) {
    s[i] = true;
    dfs(s, x^a[si][i]);
    s[i] = false;
  }
}

int main() {
  cin >> n;
  n2 = n*2;
  a = vector<vector<int>>(n2, vector<int>(n2));
  rep(i,n2) {
    for (int j = i+1; j < n2; j++) {
      cin >> a[i][j];
      a[j][i] = a[i][j];
    }
  }

  vector<bool> s(n2);
  dfs(s,0);

  cout << ans << endl;
  return 0;
}