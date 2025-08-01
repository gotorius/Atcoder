#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

  vector<vector<bool>> inputgraph(int n){
    vector<vector<bool>> g(n, vector<bool>(n));
    int m;
    cin >> m;
    rep(i,m){
      int a, b;
      cin >> a >> b;
      a--; b--;
      g[a][b] = true;
      g[b][a] = true;
    }
  return g;
  }


int main(void){
  int n;
  cin >> n;
  auto g = inputgraph(n);
  auto h = inputgraph(n);
  vector<vector<int>> a(n, vector<int>(n));
  rep(i,n)rep(j,n) if(j > i){
    cin >> a[i][j];
    a[j][i] = a[i][j];
  }

  int ans = 1001001001;
  vector<int> p(n);
  rep(i,n) p[i] = i;
  do{
    int now = 0;
    rep(i,n)rep(j,i){
      if(h[i][j] != g[p[i]][p[j]]){
        now += a[i][j];
      }
    }
    ans = min(ans, now);
  }while(next_permutation(p.begin(), p.end()));
  cout << ans << endl;
  return 0;
}

