#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    ll m;
    int i=0;
    
    const int INF = 1001001001;

    cin >> n >> m;
    
    vector<int> a(n);  // n+1ではなくnに変更
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // ラムダ関数
    auto f = [&](int x) -> bool {
        ll s = 0;
        for (i = 0; i < n; i++) {
            s += min(x, a[i]);
        }
        return s <= m;
    };  // ここにセミコロンが必要
    
    if(f(INF)) cout << "infinite" << endl;
    else{
      int ac = 0, wa = INF;
      while (ac + 1 < wa) {
          int wj = (ac + wa) / 2;
          if (f(wj)) ac = wj;
          else wa = wj;
      }
      cout << ac << endl;
    }
    
    return 0;
}
