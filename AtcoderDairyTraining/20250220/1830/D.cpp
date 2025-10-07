#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> c(2*n);
    rep(i,2*n) cin >> c[i];

    int ans = 0;
    rep(i,2*n-2){
        if(c[i] == c[i+2]) ans++;
    }
    cout << ans << endl;
    return 0;

}