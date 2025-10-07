#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;

    int l = -1, r = -1;
    int ans = 0;
    rep(i,n){
        int a;
        char h;
        cin >> a >> h;
        if(h == 'L'){
            if(l == -1){
                l = a;
            }else{
                ans += abs(a - l);
                l = a;
            }
        }else{
            if(r == -1){
                r = a;
            }else{
                ans += abs(a - r);
                r = a;
            }
        }
    }
    cout << ans << endl;
    return 0;

}