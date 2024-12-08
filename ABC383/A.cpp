#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, l = 0;
    cin >> n;
    vector<int> t(n), v(n);
    rep(i,n) cin >> t[i] >> v[i];

    rep(i,n){
        l += v[i];
        while(i < n-1 && t[i] != t[i+1]){
            if(l > 0) l--;
            t[i]++;
        }
    }

    cout << l << endl;
    return 0;   
}