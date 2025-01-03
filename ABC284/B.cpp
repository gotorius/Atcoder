#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int t;
    cin >> t;

    rep(i,t){
        int n;
        cin >> n;
        vector<int> a(n);

        int ans = 0;
        rep(j,n){
            cin >> a[j];
            if(a[j] % 2 == 1) ans++;
        }
        
        cout << ans << endl;
    }
    return 0;
}