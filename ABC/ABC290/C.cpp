#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> m;
    rep(i,n){
        cin >> a[i];
        m[a[i]]++;
    }

    int ans = 0;
    rep(i,k){
        if(m.find(i) == m.end()){
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
