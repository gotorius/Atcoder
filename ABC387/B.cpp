#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int x;
    cin >> x;

    int ans = 0;
    rep(i,9){
        rep(j,9){
            if((i+1)*(j+1) != x){
                ans += (i+1)*(j+1);
            }
        }
    }
    cout << ans << endl;
    return 0;
   
}