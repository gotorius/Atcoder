#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    rep(i,n) cin >> c[i];
    rep(i,n) cin >> r[i];

    int ans = -1;
    int p;
    rep(i,n){
        if(c[i] == t){
            if(ans < r[i]){
                ans = r[i];
                p = i+1;
            }
        }
    }

    if(ans == -1){
        rep(i,n){
            if(c[0] == c[i]){
                if(ans < r[i]){
                    ans = r[i];
                    p = i+1;
                }
            }
        }
    }

    cout << p << endl;
    return 0;
}