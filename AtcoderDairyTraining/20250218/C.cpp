#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> ok(360, false);

    int r = 0;
    ok[0] = true;
    rep(i,n){
        cin >> a[i];
        r += a[i];
        r %= 360;
        ok[r] = true;
    }



    int ans = 0;
    rep(i,360){
        if(ok[i]){
            int cur = 1;
            for(int j = i+1; j <= 360; j++){
                if(ok[j%360]){
                    ans = max(ans,cur);
                    break;
                }
                else cur++;
            }
        }
    }
    cout << ans << endl;
    return 0;


}
