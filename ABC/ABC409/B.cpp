#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int ans = 0;
    rep(i,n){
        int cnt = 0;
        rep(j,n){
            if(i+1 <= a[j]) cnt++;
        }
        if(i+1 <= cnt){
            ans = max(ans, i+1);
        }
    }
    cout << ans << endl;
    return 0;

}