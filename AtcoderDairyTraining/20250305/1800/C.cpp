#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i], a[i]--;
    x--;
    vector<bool> b(n,false);
    b[x] = true;
    while(b[x]){
        x = a[x];
        if(b[x] == false) b[x] = true;
        else break;
    }
    int ans = 0;
    rep(i,n) if(b[i]) ans++;
    cout << ans << endl;
    return 0;
}