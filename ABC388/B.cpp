#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> t(n), l(n);
    rep(i,n) cin >> t[i] >> l[i];

    rep(i,d){
        int m = 0;
        rep(j,n){
            m = max(m, (t[j]*(l[j]+(i+1))));
        }
        cout << m << endl;
    }
    return 0;
   
}