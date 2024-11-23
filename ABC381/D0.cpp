#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    
    int cnt = 0;
    int ans = 0;
    map<int, int> m;
    for(int i=0; i<n-1; i++){
      if(a[i] == a[i+1] && m[a[i]] != 1){
        cnt+=2;
        m[a[i]]++;
        i++;
      }else{
        cnt = 0;
        m.clear();
      }
      ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}