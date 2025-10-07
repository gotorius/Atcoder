#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

//snukeさんの解法
int main() {
  int n; ll S;
  cin >> n >> S;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<ll> s(n*2+1);
  rep(i,n*2) s[i+1] = s[i]+a[i%n];

  ll T = s[n];
  S %= T;

  set<ll> st;
  rep(i,s.size()) st.insert(s[i]);
  rep(i,s.size()) {
    if (st.count(s[i]-S)) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}