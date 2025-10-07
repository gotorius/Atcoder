#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    int n;
    cin >> n;
    vector<int> p(n);
    map<int,int> mp;
    rep(i,n){
        cin >> p[i];
        mp[p[i]] = i;
    }

    int q;
    cin >> q;
    rep(i,q){
        int a, b;
        cin >> a >> b;
        if(mp[a] < mp[b]) cout << a << endl;
        else cout << b << endl;
    }
    return 0;

}
