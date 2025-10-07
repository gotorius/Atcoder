#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<tuple<int,int,char>> points;
  rep(i,m) {
    int x, y; char c;
    cin >> x >> y >> c;
    points.emplace_back(x,y,c);
  }
  sort(points.rbegin(), points.rend());

  int maxY = -1;
  for (auto [x,y,c] : points) {
    if (c == 'B') {
      maxY = max(maxY, y);
    } else {
      if (y <= maxY) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}