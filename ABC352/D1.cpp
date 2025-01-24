#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  rep(i,n) p[i]--;
  vector<int> q(n);
  rep(i,n) q[p[i]] = i;

  int ans = n;
  set<int> st;
  rep(i,n) {
    st.insert(q[i]);
    if (st.size() > k) st.erase(q[i-k]);
    if (st.size() == k) {
      int now = *st.rbegin() - *st.begin();
      ans = min(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}