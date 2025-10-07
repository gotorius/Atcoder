#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    rep(i,n){
        int ans;
        cin >> a[i] >> b[i];
        ans = a[i]+b[i];
        cout << ans << endl;
    }
    return 0;
}
