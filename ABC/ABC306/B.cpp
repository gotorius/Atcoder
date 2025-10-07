#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;

int main() {
    ull r = 1;
    ull ans = 0;
    vector<int> a(64);
    rep(i,64){
        cin >> a[i];
        if(a[i] == 0){
            r *= 2;
        }else{
            ans += r;
            r *= 2;
        }
    }
    cout << ans << endl;
    return 0;
}
