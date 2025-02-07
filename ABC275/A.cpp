#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    int m = 0;
    int ans = -1;
    rep(i,n){
        cin >> h[i];
        if(m < h[i]){
            m = h[i];
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}