#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];

    int cnt = 0, ans = 0;
    rep(i,n){
        int a = i;
        for(int j = 1; j <= n; j++){
            while(h[i] == h[a+j]){
                a += j;
                cnt++;
            }
            ans = max(ans,cnt);
            cnt = 0;
            a = i;
        }
    }
    cout << ans+1 << endl;
    return 0;
   
}