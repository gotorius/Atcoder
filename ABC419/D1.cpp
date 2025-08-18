#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<int> a(n+1,0);
    rep(i,m){
        int l, r;
        cin >> l >> r;
        l--;
        a[l] += 1;
        a[r] -= 1;
    }

    rep(i,n-1) a[i+1] += a[i];
    rep(i,n){
        if(a[i]%2 == 0) cout << s[i];
        else cout << t[i];
    }
    cout << endl;
    return 0;
}