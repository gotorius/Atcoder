#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int,int>;

int main(void){
    vector<int> a(7);
    rep(i,7) cin >> a[i];
    map<int,int> mp;
    rep(i,7) mp[a[i]]++;
    int ok = 0, ok1 = 0;

    for(auto x: mp){
        if(x.second >= 3){
            ok++;
        }
        if(x.second >= 2) ok1++;
    }
    if(ok1 >= 2 && ok >= 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}