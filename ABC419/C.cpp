#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    int minr = 1e9, minc = 1e9;
    int maxr = 0, maxc = 0;
    rep(i,n){
        int r, c;
        cin >> r >> c;
        maxr = max(maxr, r);
        maxc = max(maxc, c);
        minr = min(minr, r);
        minc = min(minc, c);
    }
    int ans1 = (maxr - minr + 1)/2;
    int ans2 = (maxc - minc + 1)/2;
    int ans = max(ans1, ans2);
    cout << ans << endl;
    return 0;  
}