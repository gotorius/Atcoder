#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int a[101][101][101];
int s[102][102][102];

int main() {
  int n, q;
  cin >> n;
  rep(i,n)rep(j,n)rep(k,n) cin >> a[i][j][k];
  
  rep(i,n)rep(j,n)rep(k,n) s[i+1][j+1][k+1] = a[i][j][k];

  rep(i,n+1)rep(j,n+1)rep(k,n+1) s[i+1][j][k] += s[i][j][k];
  rep(i,n+1)rep(j,n+1)rep(k,n+1) s[i][j+1][k] += s[i][j][k];
  rep(i,n+1)rep(j,n+1)rep(k,n+1) s[i][j][k+1] += s[i][j][k];

  cin >> q;
  rep(qi,q) {
    int lx, rx, ly, ry, lz, rz;
    cin >> lx >> rx >> ly >> ry >> lz >> rz;
    lx--; ly--; lz--;
    int ans = 0;
    ans += s[rx][ry][rz];
    ans -= s[lx][ry][rz];
    ans -= s[rx][ly][rz];
    ans += s[lx][ly][rz];
    ans -= s[rx][ry][lz];
    ans += s[lx][ry][lz];
    ans += s[rx][ly][lz];
    ans -= s[lx][ly][lz];
    cout << ans << endl;
  }
  return 0;
}