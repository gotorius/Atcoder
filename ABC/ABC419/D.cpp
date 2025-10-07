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
        if(a[l] != 1) a[l] = 1;
        else a[l] = 0;
        if(a[r] != 1) a[r] = 2;
        else a[r] = 0;
    }
    int cnt = 0;
    rep(i,n){
        if(a[i] == 1) cnt++;
        if(cnt % 2 == 0) cout << s[i];
        else cout << t[i];
    }
    cout << endl;

    rep(i,n) cout << a[i];
    cout << endl;
    return 0;
}