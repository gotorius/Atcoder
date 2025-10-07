#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;

int main(void) {
    int n, q;
    string s;
    cin >> n >> s >> q;
    vector<char> c(q);
    vector<char> d(q);
    string a = "abcdefghijklmnopqrstuvwxyz";
    string b = "abcdefghijklmnopqrstuvwxyz";
    
    map<char, char> aa;
    rep(i, q) {
      cin >> c[i] >> d[i];
      rep(j,26){
        if(a[j] == c[i]){
          a[j] = d[i];
        }
      }
    }
    rep(i,26) aa[b[i]] = a[i];

    rep(i,n){
      cout << aa[s[i]];
    }
    cout << endl;
    return 0;

}

