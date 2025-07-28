#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >>a[i];
    int x;
    cin >> x;
    bool ok = false;
    rep(i,n) if(a[i] == x) ok = true;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}