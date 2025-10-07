#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    rep(i,h) cin >> s[i];
    rep(i,h) cin >> t[i];

    vector<string> cols_s(w), cols_t(w);
    rep(i,h) rep(j,w) {
        cols_s[j] += s[i][j];
        cols_t[j] += t[i][j];
    }

    sort(cols_s.begin(), cols_s.end());
    sort(cols_t.begin(), cols_t.end());

    if (cols_s == cols_t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
