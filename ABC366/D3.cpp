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
    auto sum_z = [&](int rx, int ry, int lz, int rz) {
      return s[rx][ry][rz] - s[rx][ry][lz];
    };
    auto sum_yz = [&](int rx, int ly, int ry, int lz, int rz) {
      return sum_z(rx,ry,lz,rz) - sum_z(rx,ly,lz,rz);
    };
    auto sum_xyz = [&](int lx, int rx, int ly, int ry, int lz, int rz) {
      return sum_yz(rx,ly,ry,lz,rz) - sum_yz(lx,ly,ry,lz,rz);
    };
    int ans = sum_xyz(lx,rx,ly,ry,lz,rz);
    cout << ans << endl;
  }
  return 0;
}