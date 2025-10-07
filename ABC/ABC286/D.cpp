#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    vector<vector<int>> s;

    rep(i,n) cin >> a[i] >> b[i];
    rep(i,n){
        int ss = 0;
        rep(j,b[i]){
            ss += a[i];
            s[i].push_back(ss);
        }
    }
    // 累積和でやろうとしたけど無理だった><

}
